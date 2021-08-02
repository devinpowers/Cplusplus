/*
 * Boss.cpp
 *
 *  Created on: Feb 6, 2017
 *      Author: Robert Larson
 */

#include "Boss.h"

#include "MyBlog.h"
#include "StringData.h"

#include <iostream>
#include <string>

Boss::Boss(MyBlog * blog)
: m_pBlog(blog)
{

}

Boss::~Boss()
{
}

void Boss::BlogUpdate()
{
    StringData * stringData = m_pBlog->GetData();

    std::string data = stringData->GetData();

    std::cout << "Boss received \"" << data << "\"\n";
}
