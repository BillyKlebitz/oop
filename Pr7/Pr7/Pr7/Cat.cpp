#include "pch.h"
#include "Cat.h"

Cat::Cat() : Animal::Animal("Ìÿó"){}

void Cat::Voice() {
	cout << sound << endl;
}