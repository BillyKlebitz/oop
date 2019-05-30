#include "pch.h"
#include "CountryHouse.h"

CountryHouse::CountryHouse(double worth):Property::Property(worth){}

double CountryHouse::bill() {
	return worth / 500;
}