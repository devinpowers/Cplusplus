/*
 * List.h
 *
 *  Created on: 7-26-2021
 *      Author: Devin
 */

#ifndef LIST_H_
#define LIST_H_

#include "Iterator.h"

template <class Item>
class List {
public:
	virtual Iterator<Item> * CreateIterator() const = 0; // Iterator 
	virtual unsigned int Count() const = 0; // Return number of items in the list
	virtual void Append(Item item) = 0; // Add item (element to the List)
};

#endif