

#ifndef LIVINGDOG_H_
#define LIVINGDOG_H_

#include "Dog.h"

#include <string>

class LivingDog : public Dog {
public:
	LivingDog(std::string name);
	virtual ~LivingDog();

	virtual void Bark();
private:
	std::string m_name;
};

#endif
