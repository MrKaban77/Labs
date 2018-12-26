#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, z1, z2;
	cout << "Ente a " << endl;
	cin >> a;
	z1 = cos(a) + sin(a) + cos(3 * a) + sin(3 * a);
	z2 = 2 * sqrt(2)*cos(a)*sin((3.14 / 4) *(2 * a));
	if (z1 == z2)
		cout << z1 << " = " << z2;
	else {
		if (z1 < z2) {
			cout << z1 << " < " << z2;
		}
		else {
			cout << z1 << " > " << z2;
		}
	}
	cin.get();
	cin.get();
	return 0;
}