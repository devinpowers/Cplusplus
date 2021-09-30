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


	// Set up Proxy
	Stadium stadium;			
	StadiumProxy stadiumProxy(&stadium);

	stadiumProxy.EnterStadiumEarly(&member);
	stadiumProxy.EnterStadiumEarly(&guest);

	stadiumProxy.EnterStadiumEarly(&guest2);


	stadiumProxy.AttendFloor(&member);
	stadiumProxy.AttendFloor(&guest);

	stadiumProxy.AttendFloor(&guest2);



}


