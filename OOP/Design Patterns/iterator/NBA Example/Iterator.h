/*
 *     Iterator.h
 *		Date: 7 -26-2021
 *
 *    Author: Devin Powers
 */

#ifndef ITERATOR_H_
#define ITERATOR_H_

template <class Item>
class Iterator {
public:
	virtual void First() = 0;  
	virtual void Next() = 0;
	virtual bool IsDone() const = 0;
	virtual Item CurrentItem() const = 0;
};

#endif


