#include "pch.h"
#include <iostream> 
#include<cmath> 

using namespace std;

double fact(int n) {
	double res = 1;
	for (int i = 1; i <= n; i++) {
		res = res * i;
	}
	return res;
}
int main() {
	double eps, f1 = 10000, f = 0, A, B;
	float dx;
	int i = 0, j = 0;
	cout << "Enter A and B ";
	cin >> A >> B;

	cout << "Enter dx" << endl;
	cin >> dx;
	cout << "Enter eps ";
	cin >> eps;
	cout << "+--------+---------------+-+" << endl;
	cout << "|" << "X" << "\t |" << "f(x)" << "\t " << "\t |N" << "|" << endl;
	cout << "+--------+---------------+-+" << endl;
	while (A <= B + dx) {
		while (f1 >= eps) {
			f1 = pow(A, i) / fact(i);
			i += 2;
			f = (f1*pow(-1, j)) + f;
			j++;
		}
		cout << "|" << A << "\t |" << f << "\t |" << j << "|" << endl;
		f1 = 1000;
		f = 0; i = 0; j = 0;
		A += dx;
		cout << "+--------+---------------+-+" << endl;
	}
	cin.get();
	cin.get();
	return 0;
}