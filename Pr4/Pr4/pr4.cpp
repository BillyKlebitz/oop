#include "pch.h"
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

void setSize(const int& a, vector<int*>& A, vector<int>& size) {
	A.push_back(new int[a]);
	size.push_back(a);
}

void fillArray(vector<int*>& A, vector<int>& size, const int& i) {
	cout << "Если хотите заполнить массив случайно нажмите 1, 2 чтобы заполнить массив с клавиатуры" << endl;
	int tmp;
	cin >> tmp;
	while (tmp != 1 && tmp != 2) {
		cout << "Попытаться опять? 1 для случайного заполнения, 2 для заполнения с клавиатуры" << endl;
		cin >> tmp;
	}
	if (tmp == 1) {
		srand(time(NULL));
		for (int j = 0; j < size[i]; j++)
			A[i][j] = rand() % 200 - 100;
	}
	else {
		for (int j = 0; j < size[i]; j++) {
			cout << "Введите элемент " << j << endl;
		}
	}
}

void showArray(vector<int*>& A, vector<int>& size, const int& i) {
	for (int j = 0; j < size[i]; j++)
		cout << A[i][j] << " ";
	cout << endl;
}

void deleteArray(vector<int*>& A, const int& i) {
	A.erase(A.begin() + i);
}

int main()
{ 
	setlocale(LC_ALL, "Russian");
	vector<int*> A;
	vector<int> Size;

	int op;

	while (true) {
		cout << "Введите " << endl << "1 чтобы обозначить размер массива" << endl
			<< "2 чтобы заполнить массив" << endl << "3 для показа массива" << endl
			<< "4 для удаления массива" << endl << "5 для остановки работы программы" << endl;
		cin >> op;
		int size, num;
		switch (op)
		{
		case 1:
			cout << "Введите размер массива ";
			cin >> size;
			cout << endl;
			setSize(size, A, Size);
			break;

		case 2:
			cout << "Введите номер массива для заполнения ";
			cin >> num;
			cout << endl;
			if (A.size() + 1 <= num || num - 1 < 0) {
				cout << "Неверный номер массива" << endl;
			}
			else {
				fillArray(A, Size, num - 1);
			}
			break;

		case 3:
			cout << "Введите номер массива для показа";
			cin >> num;
			cout << endl;
			if (A.size() + 1 <= num || num - 1 < 0) {
				cout << "Неверный номер массива" << endl;
			}
			else {
				showArray(A, Size, num - 1);
			}
			break;

		case 4:
			cout << "Введите номер массива для удаления ";
			cin >> num;
			cout << endl;
			if (A.size() + 1 <= num || num - 1 < 0) {
				cout << "Неверный номер массива" << endl;
			}
			else {
				deleteArray(A, num - 1);
			}
			break;

		case 5:
			return 0;

		default:
			cout << "Ввелена неправильная операция. Попытайтесь еще раз";
			break;
		}
	}

}