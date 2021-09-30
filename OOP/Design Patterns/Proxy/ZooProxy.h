/*
 * ZooProxy.h
 */

#ifndef ZOOPROXY_H_
#define ZOOPROXY_H_

class Zoo;
class ZooPatron;

class ZooProxy {
	public:
		ZooProxy(Zoo * zoo);
		virtual ~ZooProxy();

		virtual void EnterZooEarly(ZooPatron * patron);
		virtual void AttendAnimalShow(ZooPatron * patron);

	private:
		Zoo * m_pZoo;
};

#endif /* ZOOPROXY_H_ */


