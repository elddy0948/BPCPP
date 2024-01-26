#pragma once
#ifndef EXAMPLE_4_H
#define EXAMPLE_4_H

#include <iostream>

namespace e4 {
	using namespace std;
	class Power {
	public:
		Power(int kick = 0, int punch = 0) : kick(kick), punch(punch) {}
		~Power() {}

	public:
		void show();
		Power operator+(Power rhs);

	private:
		int kick;
		int punch;
	};

	void Power::show() {
		cout << "kick = " << kick << "\tpunch = " << punch << '\n';
	}

	Power Power::operator+(Power rhs) {
		Power tmp;
		tmp.kick = this->kick + rhs.kick;
		tmp.punch = this->punch + rhs.punch;
		return tmp;
	}

	void e4Main() {
		Power a(3, 5), b(4, 6), c;
		c = a + b;
		a.show();
		b.show();
		c.show();
		return;
	}
}
#endif /* !EXAMPLE_4_H */
