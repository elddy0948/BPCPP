#pragma once
#ifndef PROBLEM_2_H
#define PROBLEM_2_H

#include <iostream>
#include <string>

namespace p2 {
	using namespace std;

	class Person {
	public:
		Person() : Person(1) {}
		Person(int id, string name = "Grace", double weight = 20.5) : id(id), name(name), weight(weight) {}
	public:
		void show() { cout << id << ' ' << weight << ' ' << name << endl; }

	private:
		double weight;
		int id;
		string name;
	};

	void p2Main() {
		Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
		grace.show();
		ashley.show();
		helen.show();
	}
}

#endif /* !PROBLEM_2_H */
