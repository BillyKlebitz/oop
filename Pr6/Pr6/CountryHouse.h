#ifndef _COUNTRY_HOUSE_H
#define _CONUTRY_HOUSE_H
#include "Property.h"

class CountryHouse : public Property {
public:
	CountryHouse(double);
	double bill() override;
};

#endif // !_COUNTRY_HOUSE_H
