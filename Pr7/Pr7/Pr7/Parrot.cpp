#include "pch.h"
#include "Parrot.h"

Parrot::Parrot() : Animal::Animal("�����") {}

void Parrot::Voice() {
	cout << sound << endl;
}