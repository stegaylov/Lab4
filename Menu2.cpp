#include<iostream>
#include<Windows.h>

using namespace std;

void Menu(int a)
{
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	switch (a)
	{
	case 1:
		cout << "Вже як місяць в моєму районі затишок!\n" << endl;
		system("pause");
		system("cls");
		break;

	case 2:
		cout << "—  Если бы программисты были врачами, им бы говорили «У меня болит нога», а они отвечали\n" << endl;
		cout << "—  «Ну не знаю, у меня такая же нога, а ничего не болит».\n" << endl;
		system("pause");
		system("cls");
		break;

	case 3:
		cout << "Стєгайлов Володимир\n" << endl;
		system("pause");
		system("cls");
		break;

	case 0:
		system("cls");
		break;
	default:
		cout << "Помилка, такого номеру не знайдено!\n" << endl;
		system("pause");
		system("cls");
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int b = 1;
	while (b != 0)
	{
		cout << "Виберіть номер пункту Меню який бажаєтн переглянути." << endl;
		cout << "\n\t\tМеню" << endl;
		cout << "1.Новини дня" << endl;
		cout << "2.Анегдот тижня" << endl;
		cout << "3.Автор!" << endl;
		cout << "0.Вихід" << endl;
		cout << "\n Номер: ";
		cin >> b;
		system("cls");
		Menu(b);
	}
}