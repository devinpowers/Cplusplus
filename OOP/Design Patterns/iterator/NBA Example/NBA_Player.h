/*
 * NBA_Player.h
 *
 *  Created on: July 26th 2021
 *      Author: Devin Powers
 */

#ifndef NBA_PLAYER_H_
#define NBA_PLAYER_H_

#include <string>
#include <iostream>

class NBA_Player {
	private:
		std::string m_name;
		std::string m_position;
		char        m_ShootingHand;
	public:
		NBA_Player(std::string name, std::string position, char ShootingHand); // Constructor
		NBA_Player(); 
		virtual ~NBA_Player();  // Deconstructor

		std::string GetName()      const { return m_name; } // Setters
		std::string GetPosition()  const { return m_position; } // Setters
		char GetShootingHandType() const { return m_ShootingHand; } // Setters
};

std::ostream& operator<<(std::ostream& outc,const NBA_Player & player);


#endif



