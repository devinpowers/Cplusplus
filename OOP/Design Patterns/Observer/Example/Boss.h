/*
 * Boss.h
 *
 *  Created on: 
 *      Author: 
 */

#ifndef BOSS_H_
#define BOSS_H_

#include "BlogObserver.h"

class MyBlog;

class Boss : public BlogObserver {
public:
	Boss(MyBlog * blog);
	virtual ~Boss();

	virtual void BlogUpdate();

private:
	MyBlog * m_pBlog;
};

#endif /* BOSS_H_ */
