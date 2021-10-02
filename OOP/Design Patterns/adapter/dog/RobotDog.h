

#ifndef ROBOTDOG_H_
#define ROBOTDOG_H_

#include <string>
#include <iostream>

class RobotDog {

	private:
		std::string m_name;
		
	public:
		RobotDog(std::string name);
		virtual ~RobotDog();

		void PlayBarkingSound();

};


RobotDog::RobotDog(std::string name): m_name(name) {}

RobotDog::~RobotDog() {}

void RobotDog::PlayBarkingSound()
{
	std::cout << m_name << " is playing barking sound\n";
}

#endif 

