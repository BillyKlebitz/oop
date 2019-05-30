#ifndef _PARROT_H
#define _PARROT_H

#include "Animal.h"

class Parrot : public Animal {
public:
	Parrot();
	void Voice() override;
};

#endif // !_PARROT_H
