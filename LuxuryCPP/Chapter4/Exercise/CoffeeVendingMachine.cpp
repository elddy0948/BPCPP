#include "CoffeeVendingMachine.h"

void CoffeeVendingMachine::fill() {
	int size = sizeof(tong) / sizeof(Container);
	for (int i = 0; i < size; ++i) { tong[i].fill(); }
}

bool CoffeeVendingMachine::selectEspresso() {
	if (tong[0].getSize() - 1 >= 0 && tong[1].getSize() - 1 >= 0) {
		tong[0].consume();
		tong[1].consume();
		return true;
	}
	return false;
}

bool CoffeeVendingMachine::selectAmericano() {

	if (tong[0].getSize() - 1 >= 0 && tong[1].getSize() - 2 >= 0) {
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		return true;
	}
	return false;
}

bool CoffeeVendingMachine::selectSugarCoffee() {
	if (tong[0].getSize() - 1 >= 0 && tong[1].getSize() - 2 >= 0 && tong[2].getSize() - 1 >= 0) {
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		tong[2].consume();
		return true;
	}
	return false;
}

void CoffeeVendingMachine::show() {
	cout << "커피 " << tong[0].getSize() << ", 물 " << tong[1].getSize() << ", 설탕 " << tong[2].getSize() << '\n';

}

void CoffeeVendingMachine::run() {
	cout << "***** 커피자판기를 작동합니다. *****\n";

	while (true) {
		int menu;

		cout << "메뉴를 눌러주세요(1: 에스프레소, 2: 아메리카노, 3: 설탕커피, 4: 잔량보기, 5: 채우기) >> ";
		cin >> menu;

		switch (menu) {
		case 1:
			if (selectEspresso()) { cout << "에스프레소 드세요.\n"; }
			else { cout << "원료가 부족합니다.\n"; }
			break;
		case 2:
			if (selectAmericano()) { cout << "아메리카노 드세요.\n"; }
			else { cout << "원료가 부족합니다.\n"; }
			break;
		case 3:
			if (selectSugarCoffee()) { cout << "설탕커피 드세요.\n"; }
			else { cout << "원료가 부족합니다.\n"; }
			break;
		case 4:
			show();
			break;
		case 5:
			fill();
			break;
		}
	}
}