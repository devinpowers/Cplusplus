/*
 * Friend.cpp
 *
 *  Created on: Feb 7, 2017
 *      Author: Robert Larson
 */

#include "Friend.h"


#include "MyBlog.h"
#include "StringData.h"

#include <iostream>
#include <string>

Friend::Friend(MyBlog * blog)
: m_pBlog(blog)
{

}

Friend::~Friend()
{
}

void Friend::BlogUpdate()
{
    StringData * stringData = m_pBlog->GetData();

    std::string data = stringData->GetData();

    std::cout << "Friend received \"" << data << "\"\n";
}
