/*
 * StdVectorList.h
 *
 *  Created on: Apr 18, 2017
 *      Author: Devin Powers
 */

#ifndef VECTOR_LIST_H_
#define VECTOR_LIST_H_

#include "List.h"
#include "Vector_List_Iterator.h"

#include <algorithm>
#include <vector>

template <class Item>
class Iterator;

template <class Item>
class VectorList : public List<Item> {

	private:
		std::vector<Item> m_vector; // Vector  
	public:

		VectorList(){}         // Constructor
 
		virtual ~VectorList(){}   // Deconstructor

		virtual Iterator<Item> * CreateIterator() const {
			return new VectorListIterator<Item>(this);
		}

		virtual unsigned int Count() const {
		return m_vector.size();
		}

		virtual void Append(Item item) {
			// Add Item/element to the list (push_back is a Vector Method)
		m_vector.push_back(item);
		}

		virtual const Item& Get(unsigned int index) const
		{
		return m_vector.at(index);
		}


};

#endif

