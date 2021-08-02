/*
 * StringData.h
 *
 *  Created on: Feb 6, 2017
 *      Author: Robert Larson
 */

#ifndef STRINGDATA_H_
#define STRINGDATA_H_

#include <string>

class StringData
{
public:
	virtual ~StringData() {}

	virtual std::string GetData() = 0;
};


#endif /* STRINGDATA_H_ */
