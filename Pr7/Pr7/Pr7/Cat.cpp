#include "pch.h"
#include "Cat.h"

Cat::Cat() : Animal::Animal("���"){}

void Cat::Voice() {
	cout << sound << endl;
}