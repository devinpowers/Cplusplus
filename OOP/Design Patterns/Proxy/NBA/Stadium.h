/*
 * Stadium.h
 *
 */


#ifndef STADIUM_H_
#define STADIUM_H_

class NBAfan;

class Stadium {
	public:
		Stadium();
		virtual ~Stadium();

		virtual void EnterStadiumEarly(NBAfan * patron);
		virtual void AttendFloor(NBAfan * patron);
};

#endif /* STADIUM_H_ */

