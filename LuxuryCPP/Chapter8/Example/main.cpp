#include <iostream>

using namespace std;

class A {
public:
	A() { cout << "A�� ������\n"; }
	~A() { cout << "A�� �Ҹ���\n"; }

private:
	int a = 0;
	int b = 0;
};

class B : public A {
public:
	B() { cout << "B�� ������\n"; }
	~B() { cout << "B�� �Ҹ���\n"; }
private:
	int c = 0;
};


int main() {
	A *a = new A();
	B *b;
	cout << " -------------------- \n";
	cout << sizeof(a) << endl;

	b = (B*)a;
	cout << sizeof(b) << endl;
	cout << " -------------------- \n";

	return 0;
}