#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


int n, res = 1, k = 1;
cout << "Введіть чмсло з якого ви хочете знайти факторіал" << endl << "N = ";
cin >> n;
while (k != (n + 1)) {
	res = res * k;
	k++;
}
cout << "\t" << n << "! = " << res << endl;
}