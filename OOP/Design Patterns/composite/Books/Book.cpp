/*
 *  Book.cpp
 *  Author: Devin Powers
 *  Leaf
 */

#include "Book.h"

#include <iostream>

Book::Book(std::string title, std::string author): m_title(title), m_author(author){} // Constructor

Book::~Book(){} // Deconstructor

void Book::DisplayInfo()
{	
	// Print out Info
	std::cout << "Book  : " << m_title << " by " << m_author << "\n";
}



