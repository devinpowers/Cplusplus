/*
 * ZooIF.h
 *
 */

#ifndef ZOOIF_H_
#define ZOOIF_H_

class ZooPatron;

class ZooIF {
	public:
		virtual void EnterZooEarly(ZooPatron * patron) = 0;
		virtual void AttendAnimalShow(ZooPatron * patron) = 0;
};

#endif /* ZOOIF_H_ */




