/*
 * NBA_Player.cpp
 *
 *  Created on: July 26th 2021
 *      Author: Devin Powers
 */

#include "NBA_Player.h"

NBA_Player::NBA_Player (std::string name, std::string position, char ShootingHand)
	: m_name(name),
    m_position(position),
    m_ShootingHand(ShootingHand)
	{}

NBA_Player::NBA_Player(): m_ShootingHand('\0') {}  // another constructor

NBA_Player::~NBA_Player() {}  // Deconstructor

std::ostream& operator<<(std::ostream& outc, const NBA_Player & player)
{
	// Pretty Print
	std::string tabsAfterName =
	     (player.GetName().size() >= 16) ?
	      std::string("\t") : std::string("\t\t");;
	outc << player.GetPosition() << "\t"
		 << player.GetName() << tabsAfterName
		 << player.GetShootingHandType();

	return outc;
}


