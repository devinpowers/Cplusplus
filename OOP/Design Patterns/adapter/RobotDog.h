

#ifndef ROBOTDOG_H_
#define ROBOTDOG_H_

#include <string>

class RobotDog {

private:
	std::string m_name;
	
public:
	RobotDog(std::string name);
	virtual ~RobotDog();

	void PlayBarkingSound();

};

#endif 

