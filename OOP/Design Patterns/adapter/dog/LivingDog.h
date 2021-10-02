

#ifndef LIVINGDOG_H_
#define LIVINGDOG_H_

#include "Dog.h"

#include <string>
#include <iostream>

class LivingDog : public Dog {

	private:
		std::string m_name;
	public:
		LivingDog(std::string name);
		virtual ~LivingDog();

		virtual void Bark();

};


LivingDog::LivingDog(std::string name) : m_name(name) {}  // Constructor

LivingDog::~LivingDog() {}  // Deconstructor

void LivingDog::Bark() {
	std::cout << m_name << " is barking!\n";
}


#endif


