#include "pch.h"
#ifndef PROPERTY_H
#define PROPERTY_H

class Property {
public:
	Property(double);
	virtual double bill() = 0;

protected:
	double worth;
};
#endif // !PROPERTY_H
