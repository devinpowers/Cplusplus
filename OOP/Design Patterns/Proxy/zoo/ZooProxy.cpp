/*
 * ZooProxy.cpp
 *

 */

#include "ZooProxy.h"

#include "Zoo.h"
#include "ZooPatron.h"

#include <iostream>

ZooProxy::ZooProxy(Zoo * zoo) : m_pZoo(zoo) {}

ZooProxy::~ZooProxy() {}

void ZooProxy::EnterZooEarly(ZooPatron * patron)
{
	if(patron->HasEarlyAccess())
	{
		m_pZoo->EnterZooEarly(patron);
	}
	else
	{
		std::cout << "Sorry, " << patron->GetName() << ", you don't have early zoo access privileges\n";
	}
}

void ZooProxy::AttendAnimalShow(ZooPatron * patron)
{
	if(patron->HasAnimalShowAccess())
	{
		m_pZoo->AttendAnimalShow(patron);
	}
	else
	{
		std::cout << "Sorry, " << patron->GetName() << ", you don't have access to the animal show\n";
	}
}
