#include "Family.h"

Family::~Family() {
	delete[] p;
}

void Family::setName(int index, string name) {
	p[index].set(name, "");
}

void Family::show() {
	cout << name << "������ ������ ����" << size << "�� �Դϴ�.\n";
	for (int i = 0; i < size; ++i) {
		cout << p[i].getName() << '\t';
	}
	cout << '\n';
}