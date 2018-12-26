#include "pch.h"
#include <iostream>

using namespace std;

int main() {
	int n, k = 0 ,s = 0, Max = -10000, max = -10000;
	int *arr; int *brr; int *crr;
	cout << "Enter n " << endl;
	cin >> n;
	arr = new int[n]; brr = new int[n]; crr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] > Max) {
			Max = arr[i];
		}
		else if (-1 * arr[i] > Max) {
			Max = -1 * arr[i];
		}
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] > max)
			max = arr[i];
	}
	if (max == Max)
		cout << "Biggest module is " << Max << endl;
	else cout << "Biggest module is " << -1 * Max << endl;


	int j1 = -1, j2 = -1;
	for (int i = 0; i < n; i++) {
		if (j2 == -1 && arr[i] > 0) {
			if (j1 == -1)
				j1 = i;
			else {
				j2 = i; break;
			}
		}
	}
	for (; j1 < j2 - 1; j1++)
		s = s + arr[j1 + 1];
	cout << s << endl;

	for (int i = 0; i < n; i++)
		crr[i] = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] != 0) {
			crr[k] = arr[i];
			k++;
		}
	}
	cout << "New Array ";
	for (int i = 0; i < n; i++)
		cout << crr[i] << " ";

	cin.get();
	cin.get();
	return 0;
}