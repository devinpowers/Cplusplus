/*
 * StadiumProxy.h
 */

#ifndef STADIUMPROXY_H_
#define STADIUMPROXY_H_

#include "StadiumProxy.h"
#include "Stadium.h"
#include "NBAfan.h"
#include <iostream>

class Stadium;
class NBAfan;

class StadiumProxy {
	public:
		StadiumProxy(Stadium * stadium);
		virtual ~StadiumProxy();

		virtual void EnterStadiumEarly(NBAfan * patron);
		virtual void AttendFloor(NBAfan * patron);

	private:
		Stadium * m_pstadium;
};

// Constructor
StadiumProxy::StadiumProxy(Stadium * stadium) : m_pstadium(stadium) {}

// Deconstructor
StadiumProxy::~StadiumProxy() {}


void StadiumProxy::EnterStadiumEarly(NBAfan * patron)
{
	if(patron->HasEarlyAccess())
	{
		m_pstadium->EnterStadiumEarly(patron);
	}
	else
	{
		std::cout << "Sorry, " << patron->GetName() << ", you don't have early stadium access privileges\n";
	}
}

void StadiumProxy::AttendFloor(NBAfan * patron)
{
	if(patron->HasFloorSeatAccess()) // If TRUE
	{
		m_pstadium->AttendFloor(patron); 
	}
	else
	{
		std::cout << "Sorry, " << patron->GetName() << ", you don't have access to the Floor Seats \n";
	}
}

#endif /* STADIUMPROXY_H_ */



