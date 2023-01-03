#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	{int a = 1, n = 0;
	cout << "Введіть числа в яких ви хочете знайти не парні числа" << endl;
	while (a != 0) {
		cout << "\tВведіть число = ";
		cin >> a;
		if (a % 2 != 0) {
			n++;
		}
	}
	cout << "\tЗустрілося " << n << " непарних чисел" << endl;
	}
}