#include "pch.h"
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Parrot.h"
#include <iostream>

int main()
{	
	setlocale(LC_ALL, "Russian");
	Dog dog;
	Cat cat;
	Parrot parrot;
	cout << "Собака говорит: "; 
	dog.Voice(); 
	cout << "Кошка говорит: ";
	cat.Voice();
	cout << "Попугай говорит: ";
	parrot.Voice();
	system("PAUSE");
}