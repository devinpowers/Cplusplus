/*
 * MyBlogTest.cpp
 *
 *  Created on: Feb 6, 2017
 *      Author: Robert Larson
 */

#include "MyBlog.h"
#include "Boss.h"
#include "CoWorker.h"
#include "Friend.h"
#include <iostream>

int main()
{
    MyBlog   * blog     = new MyBlog();

    Boss     * boss     = new Boss(blog);
    CoWorker * coWorker = new CoWorker(blog);
    Friend   * myFriend = new Friend(blog);

    blog->Subscribe(boss);
    blog->Subscribe(coWorker);

    blog->SetData(std::string("My first blog"));

    blog->Unsubscribe(boss);
    blog->Subscribe(myFriend);

    blog->SetData(std::string("My second blog"));

    blog->Unsubscribe(coWorker);

    blog->SetData(std::string("My third blog"));

    delete boss;
    delete coWorker;
    delete myFriend;
    delete blog;

    return 0;
}

