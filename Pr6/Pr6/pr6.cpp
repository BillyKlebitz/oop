#include "pch.h"
#include <iostream>
#include "Appartment.h"
#include "Car.h"
#include "CountryHouse.h"


int main()
{
	setlocale(LC_ALL, "Russian");
	Property ** property = new Property * [7];
	property[0] = &Appartment(2000000);
	property[1] = &Appartment(4000000);
	property[2] = &Appartment(300000);
	property[3] = &Car(40000);
	property[4] = &Car(50000);
	property[5] = &CountryHouse(6000000);
	property[6] = &CountryHouse(10000000);

	double sum = 0;

	for (int i = 0; i < 7; i++) {
		sum += property[i]->bill();
	}

	std::cout << "Всего налогов: " << sum << std::endl;
	system("PAUSE");
	delete(property);
}