#include "pch.h"
#include "Appartment.h"

Appartment::Appartment(double worth):Property(worth){}

double Appartment::bill() {
	return worth/1000;
}

