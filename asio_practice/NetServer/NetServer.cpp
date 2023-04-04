#include <iostream>
#include <olc_net.h>

enum class CustomMessageTypes : uint32_t
{
	ServerAccept,
	ServerDeny,
	ServerPing,
	MessageAll,
	ServerMessage,
};

class CustomServer : public olc::net::server_interface<CustomMessageTypes>
{
public:
	CustomServer(uint16_t nPort) : olc::net::server_interface<CustomMessageTypes>(nPort)
	{

	}

protected:
	virtual bool OnClientConnect(std::shared_ptr<olc::net::connection<CustomMessageTypes>> client)
	{
		return true;
	}

	virtual void OnClientDisconnect(std::shared_ptr<olc::net::connection<CustomMessageTypes>> client)
	{

	}

	virtual void OnMessage(std::shared_ptr<olc::net::connection<CustomMessageTypes>> client, olc::net::message<CustomMessageTypes> msg)
	{

	}
};

int main()
{
	CustomServer server(60000);

	server.Start();

	while (true)
	{
		server.Update();
	}

	return 0;
}