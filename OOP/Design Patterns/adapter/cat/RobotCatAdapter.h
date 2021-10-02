
#ifndef ROBOTCATADAPTER_H_
#define ROBOTCATADAPTER_H_

#include "Cat.h"

#include "RobotCatAdapter.h"

#include "RobotCat.h"

class RobotCat;

class RobotCatAdapter : public Cat {
	private:
		RobotCat * _RobotCat;
		
	public:
		RobotCatAdapter(RobotCat * robotCat);
		virtual ~RobotCatAdapter();

		virtual void Meow();

};


RobotCatAdapter::RobotCatAdapter(RobotCat * robotCat) : _RobotCat(robotCat){}

RobotCatAdapter::~RobotCatAdapter() {}

void RobotCatAdapter::Meow()
{
   _RobotCat->PlayMeowingSound();
}

#endif // ROBOTCATADAPTER_H_



