#include "pch.h"
#include "Dog.h"

Dog::Dog() : Animal::Animal("���"){}

void Dog::Voice() {
	cout << sound << endl;
}