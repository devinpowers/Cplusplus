

#include "LivingDog.h"

#include <iostream>

LivingDog::LivingDog(std::string name) : m_name(name) {}  // Constructor

LivingDog::~LivingDog() {}  // Deconstructor

void LivingDog::Bark() {
	std::cout << m_name << " is barking!\n";
}


