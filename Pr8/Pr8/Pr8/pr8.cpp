#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	ifstream inp("inn.txt");
	string input = "";
	while (!inp.eof()) {
		inp >> input;
		cout << input << endl;
	}
	inp.close();
	system("PAUSE");
	return 0;
	}