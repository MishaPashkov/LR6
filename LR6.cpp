//test
#include <iostream>
#include <iomanip>
#include "math.h"
using namespace std;
int main()
{
	double a, b, c, x, f;
	bool pr = true;
	cout << "Enter a, b, c, x\n";
	cin >> a >> b >> c >> x;
	if (a < 0 && x != 0) f = a * pow(x, 2) + pow(b, 2) * x;
	else
		if (a > 0 && x == 0) f = x - a / (x - c);
		else
			f = 1 + x / c;
	if (pr == true) cout << "F = " << f;
	else cout << "F is not defined ";
}
