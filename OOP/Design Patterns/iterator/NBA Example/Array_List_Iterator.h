/*
 * ArrayListIterator.h
 *
 *  Created on: 
 *      Author: Devin Powers
 */

#ifndef ARRAY_LIST_ITERATOR_H_
#define ARRAY_LIST_ITERATOR_H_

#include "Iterator.h"

template <class Item>
class ArrayList;

template <class Item>
class ArrayListIterator : public Iterator<Item> {

private:
	const ArrayList<Item> * Array_List;

	unsigned int Array_index;

public:
    ArrayListIterator(const ArrayList<Item> * list) : Array_List(list), Array_index(0){}

	virtual ~ArrayListIterator(){}

	virtual void First()
	{
        Array_index = 0;
	}

	virtual void Next()
	{
        Array_index++;
	}

	virtual bool IsDone() const
	{
        return (Array_List->Count() <= Array_index);
	}

	virtual Item CurrentItem() const
	{
        if(IsDone())
        {
        	return Item();
        }

        return Array_List->Get(Array_index);
   }

};

#endif


