#include "Sample.h"

Sample::~Sample()
{
	delete[] p;
}

void Sample::read()
{
	for (int i = 0; i < size; ++i)
	{
		cin >> p[i];
	}
}

void Sample::write()
{
	for (int i = 0; i < size; ++i)
	{
		cout << p[i] << ' ';
	}
	cout << endl;
}
int Sample::big()
{
	int big = p[0];

	for (int i = 1; i < size; ++i)
	{
		if (p[i] > big) { big = p[i]; }
	}

	return big;
}