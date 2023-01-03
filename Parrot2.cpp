#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char text[1001];
	cout << "Введіть безліч рядків довільного тексту. Порожній рядок = кінцю!!! " << endl;
	while (text[0] != '\0') {
		cin.getline(text, 1001);
	}
}