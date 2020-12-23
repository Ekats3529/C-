#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
	double x, y;
	cin >> x >> y;
	cout << fixed << ((1 + pow(sin(x + y), 2)) / (2 + abs(x - ((2 * x) / (1 + x * x * y * y))))) + x;
	return 0;
}