#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int dob, n, a = 1;
	cout << "����� ����������� ����� ����� ������� ���� ������ ������. ����� 0 ������ ����������� �� �� � �������� �������." << endl;
	n = 1; dob = 1;

	while (cout << "A[" << n << "] = ", (cin >> a) && (a != 0))
	{
		dob = dob * a; n++;
	}

	cout << "\n������� = " << dob;
}