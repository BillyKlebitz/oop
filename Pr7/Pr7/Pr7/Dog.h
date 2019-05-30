#ifndef _DOG_H
#define _DOG_H
#include "Animal.h"

class Dog : public Animal {
public:
	Dog();
	void Voice() override;
};

#endif // !_DOG_H
