/*
 * ArrayList.h
 *
 *  Created on:
 *      Author: DeVin Powers
 */

#ifndef ARRAY_LIST_H_
#define ARRAY_LIST_H_

#include "List.h"

#include "Array_List_Iterator.h"

const unsigned int MAXSIZEARRAY = 200;

template <class Item>
class Iterator;

template <class Item>
class ArrayList : public List<Item> {

private:
	Item m_array[MAXSIZEARRAY];
	unsigned int current_Size;

public:
	ArrayList(): current_Size(0){} // Constructor (set size of the Array)
	virtual ~ArrayList(){} // Deconstructor

	virtual Iterator<Item> * CreateIterator() const {
		return new ArrayListIterator<Item>(this);
	}

	virtual unsigned int Count() const {
		// Count number of elements in the Array
       return current_Size;
	}

	virtual void Append(Item item) {
       if(current_Size < MAXSIZEARRAY)
       {
		   // Add Element to the array
    	   m_array[current_Size] = item;
           current_Size++;
       }
    }

	virtual const Item& Get(unsigned int index) const
	{
       return m_array[index];
	}

};

#endif
