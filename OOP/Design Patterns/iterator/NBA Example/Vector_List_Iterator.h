/*
 * Vector_List_Iterator.h
 *
 *  Created on: 7-26-21
 *      Author: Devin Powers
 */

#ifndef VECTOR_LIST_ITERATOR_H_
#define VECTOR_LIST_ITERATOR_H_

#include "Iterator.h"

template <class Item>
class VectorList;

template <class Item>
class VectorListIterator : public Iterator<Item> {

private:
	const VectorList<Item> * vector_List;

	unsigned int vector_index; // Assigned to 0 in constructor

public:
    VectorListIterator(const VectorList<Item> * list): vector_List(list),vector_index(0){} // Constructor
	
	virtual ~VectorListIterator(){} // Deconstructor

	virtual void First(){ 
		// Return first index 
        vector_index = 0;
	}

	virtual void Next()
	{
        vector_index++;
	}

	virtual bool IsDone() const
	{
        return (vector_List->Count() <= vector_index);
	}

	virtual Item CurrentItem() const
	{
        if(IsDone())
        {
        	//throw IteratorOutOfBounds;
        }
        return vector_List->Get(vector_index);
   }
};

#endif


