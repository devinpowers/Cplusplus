
#ifndef ROBOTDOGADAPTER_H_
#define ROBOTDOGADAPTER_H_

#include "Dog.h"

#include "RobotDogAdapter.h"

#include "RobotDog.h"

class RobotDog;

class RobotDogAdapter : public Dog {
	private:
		RobotDog * m_pRobotDog;
		
	public:
		RobotDogAdapter(RobotDog * robotDog);
		virtual ~RobotDogAdapter();

		virtual void Bark();

};


RobotDogAdapter::RobotDogAdapter(RobotDog * robotDog) : m_pRobotDog(robotDog){}

RobotDogAdapter::~RobotDogAdapter() {}

void RobotDogAdapter::Bark()
{
   m_pRobotDog->PlayBarkingSound();
}



#endif 



