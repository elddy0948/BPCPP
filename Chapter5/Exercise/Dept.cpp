#include "Dept.h"

Dept::Dept(const Dept& dept) {
	this->size = dept.size;	
	
	this->scores = new int[dept.size];
	memcpy(this->scores, dept.scores, dept.size * sizeof(int));
}

Dept::~Dept() {
	delete[] scores;
}

void Dept::read() {
	cout << "점수 입력 : \n";
	for (int i = 0; i < size; ++i) {
		cout << i + 1 << " >> ";
		cin >> scores[i];
	}
}

bool Dept::isOver60(int index) {
	return scores[index] > 60;
}