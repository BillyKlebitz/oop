#include "pch.h"
#include "Car.h"

Car::Car(double worth):Property::Property(worth){}

double Car::bill() {
	return worth / 200;
}