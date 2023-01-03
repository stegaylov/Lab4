#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

int res = 1, k = 1, a;
double n;
bool act = true;
cout << "Введіть випадкове число: " << endl;
while (act) {
	cout << "\tN = ";
	cin >> n;
	a = n;
	if (n) {
		if (n >= 0) {
			if ((n - a) != 0) {
				cout << "\tN Повинне бути цілим!!!" << endl;
			}
			else {
				act = false;
			}
		}
		else if (n < 0) {
			cout << "\tN Повинне бути більше нуля!!!" << endl;
		}
	}
	if (!n) {
		cout << "\tN Повинно бути цілим числом а не рядком!!!" << endl;
	}
}
while (k != (n + 1)) {
	res = res * k;
	k++;
}
cout << "\t" << n << "! = " << res << endl;
}
