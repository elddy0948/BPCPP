#include <iostream>

using namespace std;

class A {
public:
	A() { cout << "A의 생성자\n"; }
	~A() { cout << "A의 소멸자\n"; }

private:
	int a = 0;
	int b = 0;
};

class B : public A {
public:
	B() { cout << "B의 생성자\n"; }
	~B() { cout << "B의 소멸자\n"; }
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