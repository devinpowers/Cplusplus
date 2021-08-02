/*
 * BlogObserver.h
 *
 *  Created on: Feb 6, 2017
 *      Author: Robert Larson
 */

#ifndef BLOGOBSERVER_H_
#define BLOGOBSERVER_H_

class BlogObserver
{
public:
	virtual ~BlogObserver() {}

	virtual void BlogUpdate() = 0;
};


#endif /* BLOGOBSERVER_H_ */
