
#ifndef ROBOTDOGADAPTER_H_
#define ROBOTDOGADAPTER_H_

#include "Dog.h"

class RobotDog;

class RobotDogAdapter : public Dog {
public:
	RobotDogAdapter(RobotDog * robotDog);
	virtual ~RobotDogAdapter();

	virtual void Bark();

private:
	RobotDog * m_pRobotDog;
};

#endif 