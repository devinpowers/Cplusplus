

#ifndef LIVINGDOG_H_
#define LIVINGDOG_H_

#include "Dog.h"

#include <string>

class LivingDog : public Dog {

private:
	std::string m_name;
public:
	LivingDog(std::string name);
	virtual ~LivingDog();

	virtual void Bark();

};

#endif


