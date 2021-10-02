

#ifndef ROBOTCAT_H_
#define ROBOTCAT_H_

#include <string>
#include <iostream>

class RobotCat {

	private:
		std::string _name;
		
	public:
		RobotCat(std::string name);
		virtual ~RobotCat();

		void PlayMeowingSound();

};


RobotCat::RobotCat(std::string name): _name(name) {}

RobotCat::~RobotCat() {}

void RobotCat::PlayMeowingSound()
{
	std::cout << _name << " is playing meowing sound\n";
}

#endif  // ROBOTCAT_H_

