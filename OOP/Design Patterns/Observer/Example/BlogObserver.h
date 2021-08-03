/*
 * BlogObserver.h 
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


