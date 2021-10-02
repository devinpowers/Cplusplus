

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
	StadiumProxy stadiumProxy(&stadium);

	// Lets just use the stadium Interface to interact
	stadium.AttendFloor(&member);
	stadium.AttendFloor(&guest);
    stadium.EnterStadiumEarly(&guest);
}

 