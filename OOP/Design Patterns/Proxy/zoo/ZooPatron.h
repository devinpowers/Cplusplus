/*

 */

#ifndef ZOOPATRON_H_
#define ZOOPATRON_H_

#include <string>

class ZooPatron {
	public:
		ZooPatron(std::string name)
		: m_name(name) {}

		virtual ~ZooPatron() {}

		std::string GetName() { return m_name; }

		virtual bool HasAnimalShowAccess() = 0;
		virtual bool HasEarlyAccess() = 0;

	private:
		std::string m_name;
};

#endif /* ZOOPATRON_H_ */
