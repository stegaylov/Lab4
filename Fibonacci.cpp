#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

int a = 1, c = 1, n, k = 0, res = 1;
cout << "Введіть число: " << endl << "\tN = ";
cin >> n;
while (k != (n - 1)) {
	res = c;
	c += a;
	a = res;
	k++;
}
cout << "\tF(" << n << ") = " << res << endl;
}