/*
 * CoWorker.h
 *
 *  Created on: Feb 7, 2017
 *      Author: Robert Larson
 */

#ifndef COWORKER_H_
#define COWORKER_H_

#include "BlogObserver.h"

class MyBlog;

class CoWorker : public BlogObserver {
public:
	CoWorker(MyBlog * blog);
	virtual ~CoWorker();

	virtual void BlogUpdate();

private:
	MyBlog * m_pBlog;
};

#endif /* COWORKER_H_ */
