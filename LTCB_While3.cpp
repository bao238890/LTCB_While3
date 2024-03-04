}#include <iostream>
using namespace std;
int main() {
	int sodau, socuoi;
	int tong = 0;
	cout << "Nhap so dau:";
	cin >> sodau;
	cout << "Nhap so cuoi:";
	cin >> socuoi;
	cout << "VONG LAP WHILE\n";
	while (sodau <= socuoi) {
		cout << sodau << " ";
		tong = tong + sodau;
		sodau++;
	}
	cout << "\ntong=" << tong;
	return 0;
}
