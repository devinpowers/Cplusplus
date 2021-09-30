/*
 * ZooGuest.h
 */

#ifndef ZOOGUEST_H_
#define ZOOGUEST_H_

#include "ZooPatron.h"

class ZooGuest : public ZooPatron {

	public:
		ZooGuest(std::string name);
		virtual ~ZooGuest();
		virtual bool HasAnimalShowAccess()
		{
			return false;
		}
		virtual bool HasEarlyAccess()
		{
			return false;
		}
};

#endif /* ZOOGUEST_H_ */


