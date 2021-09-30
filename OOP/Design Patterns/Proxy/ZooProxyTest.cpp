/*
 * ZooProxyTest.cpp
 */

#include "Zoo.h"
#include "ZooProxy.h"
#include "ZooMember.h"
#include "ZooGuest.h"

int main()
{
	ZooMember member(std::string("Nicklas"));
	ZooGuest  guest(std::string("Bob"));

	ZooMember member2(std::string("Devin"));


	Zoo zoo;
	ZooProxy zooProxy(&zoo);

	zooProxy.EnterZooEarly(&member);
	zooProxy.EnterZooEarly(&guest);
	zooProxy.EnterZooEarly(&member2);

	zooProxy.AttendAnimalShow(&member);
	zooProxy.AttendAnimalShow(&guest);
	zooProxy.AttendAnimalShow(&member2);


}


