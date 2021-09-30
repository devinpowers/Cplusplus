/*
 * NBAGuest.h
 */

#ifndef NBAGUEST_H_
#define NBAGUEST_H_

#include "NBAfan.h"

class NBAGuest : public NBAfan {

	public:
		NBAGuest(std::string name);
		virtual ~NBAGuest();
		
		virtual bool HasFloorSeatAccess()
		{
			return false;
		}
		virtual bool HasEarlyAccess()
		{
			return false;
		}
};

// Implementation
NBAGuest::NBAGuest(std::string name) : NBAfan(name){}

NBAGuest::~NBAGuest() {}

#endif /* NBAGUEST_H_ */



