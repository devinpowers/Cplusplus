/*
 * BlogSubject.h
 *
 *  Created on: Feb 6, 2017
 *      Author: Robert Larson
 */

#ifndef BLOGSUBJECT_H_
#define BLOGSUBJECT_H_

class BlogObserver;

class BlogSubject
{
public:
	virtual ~BlogSubject() {}
	virtual void Subscribe(BlogObserver * observer) = 0;
	virtual void Unsubscribe(BlogObserver * observer) = 0;
	virtual void Notify() = 0;
};


#endif /* BLOGSUBJECT_H_ */
