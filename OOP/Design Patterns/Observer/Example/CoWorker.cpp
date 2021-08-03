/*
 * CoWorker.cpp
 *
 */

#include "CoWorker.h"

#include "MyBlog.h"
#include "StringData.h"

#include <iostream>
#include <string>

CoWorker::CoWorker(MyBlog * blog)
: m_pBlog(blog)
{
}

CoWorker::~CoWorker()
{
}


void CoWorker::BlogUpdate()
{
    StringData * stringData = m_pBlog->GetData();

    std::string data = stringData->GetData();

    std::cout << "CoWorker received \"" << data << "\"\n";
}


