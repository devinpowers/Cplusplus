/*
 * NBAProxyTest.cpp
 */

#include "Stadium.h"
#include "StadiumProxy.h"
#include "NBAMember.h"
#include "NBAGuest.h"

int main()
{
	NBAMember member(std::string("Devin"));
	NBAGuest guest(std::string("Noah"));
	NBAGuest guest2(std::string("Sarah"));
	NBAMember member2(std::string("Aaron"));


	Stadium stadium;			
	// Passing the stadium interface to the Proxy
	StadiumProxy stadiumProxy(&stadium);

	stadiumProxy.EnterStadiumEarly(&member);
	stadiumProxy.EnterStadiumEarly(&member2);

	stadiumProxy.EnterStadiumEarly(&guest);
	stadiumProxy.EnterStadiumEarly(&guest2);

	stadiumProxy.AttendFloor(&member);
	stadiumProxy.AttendFloor(&member2);

	stadiumProxy.AttendFloor(&guest);
	stadiumProxy.AttendFloor(&guest2);
}

