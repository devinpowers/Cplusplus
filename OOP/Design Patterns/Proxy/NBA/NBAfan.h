/*

 */

#ifndef NBA_Fan_H_
#define NBA_Fan_H_

#include <string>

class NBAfan {

	private:
		std::string name_;

	public:
		NBAfan(std::string name) : name_(name) {}

		virtual ~NBAfan() {} // Deconstructor

		std::string GetName() { return name_; }

		virtual bool HasFloorSeatAccess() = 0;
		virtual bool HasEarlyAccess() = 0;
	
};

#endif /* NBA_Fan_H_ */


