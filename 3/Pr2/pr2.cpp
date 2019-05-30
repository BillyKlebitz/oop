#include "pch.h"
#include <math.h>
#include <iostream>

using namespace std;

int main()
{	
	setlocale(LC_ALL, "Russian");
	double a, b, n, m;
	cout << "Введите числа a и b: ";
	cin >> a >> b;
	if (a >= b) {
		n = pow(a - b, 1.0 / 3);
	}
	else {
		double temp = sin(a*b);
		try {
			if (temp == 0)
				throw overflow_error("Деление на 0");
		}
		catch (overflow_error e) {
			cout << e.what();
			return 1;
		}
		n = a * a + (a - b) / sin(a*b);
		delete(&temp);
	}

	if (n < b) {
		try {
			if (b == 0)
				throw overflow_error("Деление на 0");
		}
		catch (overflow_error e) {
			cout << e.what();
			return 1;
		}
		double temp = pow(sin(a), 2) - cos(n);
		try {
			if (temp < 0)
				throw overflow_error("Корень отрицательного числа");
		}
		catch(overflow_error e){
			cout << e.what();
			return 1;
		}
		m = (n + a) / -b + sqrt(temp);
	}
	else if (n == b)
		m = b * b + tan(n*a);
	else
		m = pow(b, 3) + n * a*a;
	cout << "n = " << n << " m = " << m << endl;
	system("PAUSE");
}
