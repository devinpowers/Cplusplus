/*
 * StadiumProxy.cpp
 *

 */

#include "StadiumProxy.h"
#include "Stadium.h"
#include "NBAfan.h"
#include <iostream>

StadiumProxy::StadiumProxy(Stadium * stadium) : m_pstadium(stadium) {}

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
	if(patron->HasFloorSeatAccess())
	{
		m_pstadium->AttendFloor(patron);
	}
	else
	{
		std::cout << "Sorry, " << patron->GetName() << ", you don't have access to the Floor Seats \n";
	}
}


