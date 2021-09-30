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

	Zoo zoo;
	ZooProxy zooProxy(&zoo);

	zooProxy.EnterZooEarly(&member);
	zooProxy.EnterZooEarly(&guest);
	zooProxy.AttendAnimalShow(&member);
	zooProxy.AttendAnimalShow(&guest);

	return 0;
}
