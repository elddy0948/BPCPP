#include <iostream>
#include <olc_net.h>

enum class CustomMessageTypes : uint32_t {
	FireBullet,
	MovePlayer
};

class CustomClient : public olc::net::client_interface<CustomMessageTypes> {
public:
	bool FireBullet(float x, float y) {
		olc::net::message<CustomMessageTypes> msg;
		msg.header.id = CustomMessageTypes::FireBullet;
		msg << x << y;
		Send(msg);
	}
};

int main() {
	CustomClient c;

	c.Connect("community.holuck.com", 60000);
	c.FireBullet(2.0f, 5.0f);

	return 0;
}