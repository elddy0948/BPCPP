#include <iostream>

using namespace std;

int main()
{
	int nights = 1001;
	int* pt = new int;

	*pt = 1001;

	cout << "nights's value = ";
	cout << nights << " : in memory " << &nights << endl;
	cout << "int type ";
	cout << "value = " << *pt << " : in memory " << pt << endl;

	double* pd = new double;
	*pd = 10000001.0;

	cout << "double type ";
	cout << "value = " << *pd << " : in memory " << pd << endl;
	cout << "pointer pd's memory address: " << &pd << endl;

	cout << "pt's size = " << sizeof(pt);
	cout << ": *pt's size = " << sizeof(*pt) << endl;
	cout << "pd's size = " << sizeof(pd);
	cout << ": *pd's size = " << sizeof(*pd) << endl;

	return 0;
}