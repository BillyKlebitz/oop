#include "pch.h"
#include "Dog.h"

Dog::Dog() : Animal::Animal("√ав"){}

void Dog::Voice() {
	cout << sound << endl;
}