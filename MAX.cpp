#include<iostream>
#include<Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int max, a, n;
	cout << "Ведіть послідовність цілих чисел  яких бажаєте знайти. Число 0 закінчує послідовність." << endl;
	n = 2;
	cout << "A[1] = ";
	cin >> max;

	while (cout << "A[" << n << "] = ", (cin >> a) && (a != 0))
	{
		if (a > max)
			max = a;
		n++;
	}

	cout << "\nMax = " << max;
}