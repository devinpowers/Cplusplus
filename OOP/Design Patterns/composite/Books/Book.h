/*
 * Book.h
 *
 *  Author: Devin Powers
 *  Leaf Header File
 * 
 */


#ifndef BOOK_H_
#define BOOK_H_

#include "BookComponent.h"
#include <string>

class Book : public BookComponent {

private:
	std::string m_title;
	std::string m_author;

public:
	Book(std::string bookTitle, std::string author);
	virtual ~Book();

	virtual void DisplayInfo();
};

#endif



