/*
 * Sub.h
 *
 */

#ifndef SUB_H_
#define SUB_H_

#include <string>

class Sub
{
	public:
		virtual ~Sub() {}
		virtual double GetCost() = 0;
		virtual std::string GetDescription() = 0;
};

#endif /* SUB_H_ */


