#pragma once

#include "net_common.h"
#include "net_message.h"
#include "net_tsqueue.h"
#include "net_connection.h"

namespace olc {
	namespace net {
		template <typename T>
		class client_interface {

		public:
			client_interface() {

			}

			virtual ~client_interface() {
				Disconnect();
			}

		public:
			bool Connect(const std::string& host, const uint16_t port) {

				try {
					m_connection = std::make_unique<connection<T>>(); // Todo
					asio::ip::tcp::resolver resolver(m_context);
					m_endpoints = resolver.resolve(host, std::to_string(port));

					m_connection->ConnectToServer(m_endpoints);
					thrContext = std::thread([this]() { m_context.run(); });
				}
				catch (std::exception& e) {
					std::cerr << "Client exception: " << e.what() << "\n";
					return false;
				}

				return true;
			}

			void Disconnect() {
				if (IsConnected()) { m_connection->Disconnect(); }
				m_context.stop();
				if (thrContext.joinable()) { thrContext.join(); }

				m_connection.release();
			}

			bool IsConnected() {
				if (m_connection) { return m_connection->IsConnected(); }
				else { return false; }
			}

			tsqueue<owned_message<T>>& Incoming() {
				return m_qMessagesIn;
			}

		public:
			void Send(const message<T>& msg) {
				if (IsConnected()) { m_connection->Send(msg); }
			}

			tsqueue<owned_message<T>>& Incoming() { return m_qMessagesIn; }

		protected:
			asio::io_context m_context;
			std::thread thrContext;
			std::unique_ptr<connection<T>> m_connection;

		private:
			tsqueue<owned_message<T>> m_qMessagesIn;

		};
	}
}