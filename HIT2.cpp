#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

double x, y, x_0 = 0, y_0 = 0, distance_1 = 0, distance_2 = 0, r = 9;
bool act = true;
cout << "Задайте координат по Х та Y" << endl;
while (act) {
	cout << "\tx = ";
	cin >> x;
	cout << "\ty = ";
	cin >> y;
	distance_2 = (x - x_0) * (x - x_0) + (y - y_0) * (y - y_0);
	if (distance_2 >= (r * r)) {
		if (distance_1 > distance_2) {
			cout << "\tТепло" << endl;
		}
		else if (distance_1 < distance_2) {
			cout << "\tХолодно" << endl;
		}
		else {
			cout << "\tНейтрально" << endl;
		}
		distance_1 = distance_2;
	}
	else {
		cout << "\tТочка попала в коло " << endl;
		act = false;
	}
}
}