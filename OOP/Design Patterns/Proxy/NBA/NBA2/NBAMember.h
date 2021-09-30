/*
 * NBAMember.h
 * Season Ticket Member
 */

#ifndef NBA_MEMBER_H_
#define NBA_MEMBER_H_

#include "NBAfan.h"

class NBAMember : public NBAfan {
	public:
		NBAMember(std::string name);
		virtual ~NBAMember();

		virtual bool HasFloorSeatAccess()
		{
			return true;
		}
		virtual bool HasEarlyAccess()
		{
			return true;
		}
};

NBAMember::NBAMember(std::string name) : NBAfan(name) {}

NBAMember::~NBAMember() {}

#endif /* NBA_MEMBER_H_ */


