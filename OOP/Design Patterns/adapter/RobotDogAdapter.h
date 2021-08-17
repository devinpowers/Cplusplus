
#ifndef ROBOTDOGADAPTER_H_
#define ROBOTDOGADAPTER_H_

#include "Dog.h"

class RobotDog;

class RobotDogAdapter : public Dog {
private:
	RobotDog * m_pRobotDog;
	
public:
	RobotDogAdapter(RobotDog * robotDog);
	virtual ~RobotDogAdapter();

	virtual void Bark();

};

#endif 



