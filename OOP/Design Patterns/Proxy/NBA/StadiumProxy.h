/*
 * StadiumProxy.h
 */

#ifndef STADIUMPROXY_H_
#define STADIUMPROXY_H_

class Stadium;
class NBAfan;

class StadiumProxy {
	public:
		StadiumProxy(Stadium * stadium);
		virtual ~StadiumProxy();

		virtual void EnterStadiumEarly(NBAfan * patron);
		virtual void AttendFloor(NBAfan * patron);

	private:
		Stadium * m_pstadium;
};

#endif /* STADIUMPROXY_H_ */


