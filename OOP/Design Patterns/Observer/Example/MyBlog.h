/*
 * MyBlog.h
 *
 *  Created on: Feb 6, 2017
 *      Author: Robert Larson
 */

#ifndef MYBLOG_H_
#define MYBLOG_H_

#include "BlogSubject.h"
#include "StringData.h"

#include <pthread.h>

#include <string>
#include <vector>

class MyBlog : public BlogSubject {
public:
	class BlogData : public StringData
	{
	public:
		BlogData() {}
		virtual ~BlogData() {}

		virtual std::string GetData() { return m_data; }

		void SetData(std::string data) { m_data = data; }

	private:
		std::string m_data;
	};

	MyBlog();
	virtual ~MyBlog();

	virtual void Subscribe(BlogObserver * observer);
	virtual void Unsubscribe(BlogObserver * observer);
	virtual void Notify();

	StringData * GetData() { return m_pBlogData; }

	void SetData(std::string data)
	{
		m_pBlogData->SetData(data);
		Notify();
	}

private:
	std::vector<BlogObserver*> m_observers;

	BlogData * m_pBlogData;

	pthread_mutex_t m_mutex;
};

#endif /* MYBLOG_H_ */
