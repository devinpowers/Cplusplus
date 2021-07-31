/*
 * BookGroup.h
 *
 *  Created on: Apr 25, 2017
 *      Author: Robert Larson
 */

#ifndef BOOKGROUP_H_
#define BOOKGROUP_H_

#include "BookComponent.h"

#include <string>
#include <vector>

class BookGroup : public BookComponent {

private:
	std::string m_groupName;
	std::vector<BookComponent*> m_bookComponents;
public:
	BookGroup(std::string groupName);
	virtual ~BookGroup();

	virtual void Add(BookComponent * newComponent);
	virtual void Remove(BookComponent * componentToRemove);
	virtual void DisplayInfo();

};

#endif /* BOOKGROUP_H_ */


