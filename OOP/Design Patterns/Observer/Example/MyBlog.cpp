/*
 * MyBlog.cpp
 *
 *  Created on: Feb 6, 2017
 *      Author: Robert Larson
 */

#include "MyBlog.h"

#include "BlogObserver.h"

MyBlog::MyBlog()
: m_pBlogData(new BlogData())
{
   pthread_mutex_init(&m_mutex, NULL);
}

MyBlog::~MyBlog()
{
  delete m_pBlogData;
  pthread_mutex_destroy(&m_mutex);
}

void MyBlog::Subscribe(BlogObserver * observer)
{
   pthread_mutex_lock(&m_mutex);
   m_observers.push_back(observer);
   pthread_mutex_unlock(&m_mutex);
}

void MyBlog::Unsubscribe(BlogObserver * observer)
{
   std::vector<BlogObserver *>::iterator pos;

   pthread_mutex_lock(&m_mutex);

   for(pos = m_observers.begin();
	   pos != m_observers.end(); ++pos)
   {
	   if(*pos == observer)
	   {
		   m_observers.erase(pos);
		   break;
	   }
   }

   pthread_mutex_unlock(&m_mutex);

}

void MyBlog::Notify()
{
	std::vector<BlogObserver *>::iterator pos;

	pthread_mutex_lock(&m_mutex);

	for(pos = m_observers.begin();
		pos != m_observers.end(); ++pos)
	{
		BlogObserver * observer = *pos;
		observer->BlogUpdate();
	}

    pthread_mutex_unlock(&m_mutex);
}
