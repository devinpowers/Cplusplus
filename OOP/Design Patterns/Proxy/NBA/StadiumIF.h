/*
 * StadiumIF.h
 *
 */

#ifndef STADIUMIF_H_
#define STADIUMIF_H_

class NBAfan;

class StadiumIF {
	public:
		virtual void EnterStadiumEarly(NBAfan * patron) = 0;
		virtual void Attendfloor(NBAfan * patron) = 0;
};

#endif /* STADIUMIF_H_ */




