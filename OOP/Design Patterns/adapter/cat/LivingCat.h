

#ifndef LIVINGCAT_H_
#define LIVINGCAT_H_

#include "Cat.h"

#include <string>
#include <iostream>

class LivingCat : public Cat {

	private:
		std::string _name;
	public:
		LivingCat(std::string name);
		virtual ~LivingCat();

		virtual void Meow();

};


LivingCat::LivingCat(std::string name) : _name(name) {}  // Constructor

LivingCat::~LivingCat() {}  // Deconstructor

void LivingCat::Meow() {
	std::cout << _name << " is Meowing!\n";
}


#endif // LIVINGCAT_H_


