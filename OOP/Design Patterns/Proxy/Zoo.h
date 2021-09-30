/*
 * Zoo.h
 *
 */


#ifndef ZOO_H_
#define ZOO_H_


class ZooPatron;

class Zoo {
	public:
		Zoo();
		virtual ~Zoo();

		virtual void EnterZooEarly(ZooPatron * patron);
		virtual void AttendAnimalShow(ZooPatron * patron);
};

#endif /* ZOO_H_ */

