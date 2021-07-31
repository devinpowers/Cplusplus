/*
 * 		BookComponent.h
 *
 *      Author: Devin Powers
 */

#ifndef BOOKCOMPONENT_H_
#define BOOKCOMPONENT_H_


class BookComponent
{
public:
	BookComponent(){} // Constructor
	virtual ~BookComponent(){} // Deconstructor

	virtual void Add(BookComponent * newComponent){}

	virtual void Remove(BookComponent * newComponent){}

	virtual void DisplayInfo() = 0; // Pure Virtual Function, have to implement on our own
};

#endif






