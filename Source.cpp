#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int dob, n, a = 1;
	cout << "Ведіть послідовність цілих чисел добуток яких бажаєте знайти. Число 0 закінчує послідовність та не є частиною добутку." << endl;
	n = 1; dob = 1;

	while (cout << "A[" << n << "] = ", (cin >> a) && (a != 0))
	{
		dob = dob * a; n++;
	}

	cout << "\nДобуток = " << dob;
}