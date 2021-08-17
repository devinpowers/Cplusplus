

#include "LivingDog.h"

#include <iostream>

LivingDog::LivingDog(std::string name) : m_name(name) {}

LivingDog::~LivingDog() {}

void LivingDog::Bark() {
	std::cout << m_name << " is barking!\n";
}


