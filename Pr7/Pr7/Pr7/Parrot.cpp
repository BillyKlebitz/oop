#include "pch.h"
#include "Parrot.h"

Parrot::Parrot() : Animal::Animal("Чирик") {}

void Parrot::Voice() {
	cout << sound << endl;
}