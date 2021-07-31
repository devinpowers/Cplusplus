/*
 *		BookGroup.h
 *      Author: Devin Powers
 */

#ifndef BOOKGROUP_H_
#define BOOKGROUP_H_

#include "BookComponent.h"

#include <string>
#include <vector>

class BookGroup : public BookComponent {

private:
	std::string m_groupName;						// Name of Group
	std::vector<BookComponent*> m_bookComponents;	// Vector of Possible Components
public:
	BookGroup(std::string groupName);    // Constructor
	virtual ~BookGroup();				 // Deconstructor

	virtual void Add(BookComponent * newComponent);
	virtual void Remove(BookComponent * componentToRemove);
	virtual void DisplayInfo();
};

#endif

