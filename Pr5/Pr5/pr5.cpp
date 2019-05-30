#include "pch.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <climits>

using namespace std;

void Sort(int[]);
void Sort(double[]);

int main()
{
	srand(time(NULL));
	int a[10];
	double b[10];

	for (int i = 0; i < 10; i++) {
		a[i] = rand() % 80 - 20;
		b[i] = ((double)rand() / 100.0) - 200;
	}

	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	Sort(a);

	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < 10; i++) {
		cout << b[i] << " ";
	}
	cout << endl;

	Sort(b);

	for (int i = 0; i < 10; i++) {
		cout << b[i] << " ";
	}
	cout << endl;
	system("PAUSE");
}

void Sort(int a[10]) {
	for (int i = 0; i < 10; i++) {
		int minI = i;
		for (int j = i; j < 10; j++)
			if (a[j] < a[minI]) {
				minI = j;
			}
		if (minI != i) {
			int tmp = a[minI];
			a[minI] = a[i];
			a[i] = tmp;
		}
	}
}

void Sort(double a[10]) {
	for (int i = 0; i < 10; i++) {
		int minI = i;
		for (int j = i; j < 10; j++)
			if (a[j] < a[minI]) {
				minI = j;
			}
		if (minI != i) {
			double tmp = a[minI];
			a[minI] = a[i];
			a[i] = tmp;
		}
	}
}