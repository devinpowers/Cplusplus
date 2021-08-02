/*
 * Friend.h
 *
 *  Created on: Feb 7, 2017
 *      Author: Robert Larson
 */

#ifndef FRIEND_H_
#define FRIEND_H_

#include "BlogObserver.h"

class MyBlog;

class Friend : public BlogObserver {
public:
	Friend(MyBlog * blog);
	virtual ~Friend();

	virtual void BlogUpdate();

private:
	MyBlog * m_pBlog;
};


#endif /* FRIEND_H_ */
