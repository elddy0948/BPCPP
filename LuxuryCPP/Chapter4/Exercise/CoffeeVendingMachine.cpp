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
	cout << "Ŀ�� " << tong[0].getSize() << ", �� " << tong[1].getSize() << ", ���� " << tong[2].getSize() << '\n';

}

void CoffeeVendingMachine::run() {
	cout << "***** Ŀ�����Ǳ⸦ �۵��մϴ�. *****\n";

	while (true) {
		int menu;

		cout << "�޴��� �����ּ���(1: ����������, 2: �Ƹ޸�ī��, 3: ����Ŀ��, 4: �ܷ�����, 5: ä���) >> ";
		cin >> menu;

		switch (menu) {
		case 1:
			if (selectEspresso()) { cout << "���������� �弼��.\n"; }
			else { cout << "���ᰡ �����մϴ�.\n"; }
			break;
		case 2:
			if (selectAmericano()) { cout << "�Ƹ޸�ī�� �弼��.\n"; }
			else { cout << "���ᰡ �����մϴ�.\n"; }
			break;
		case 3:
			if (selectSugarCoffee()) { cout << "����Ŀ�� �弼��.\n"; }
			else { cout << "���ᰡ �����մϴ�.\n"; }
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