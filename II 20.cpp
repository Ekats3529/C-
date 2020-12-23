#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double x, y;
	cin >> x >> y;
	if (y < 23 && y > x && x < 0 && y > 0 && x > -23) cout << "Да";
	else
		if (y <= 23 && y == x && y >= 0 && x <= 0 && x >= -23) cout << "На границе";
		else
			if (y == 23 && x >= -23 && x <= 0) cout << "На границе";
			else
				if (x == 0 && y <= 23 && y >= 0) cout << "На границе";
				else
					cout << "Нет";
	return 0;
}