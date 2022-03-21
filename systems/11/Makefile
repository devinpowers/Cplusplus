# Copyright ©2022 Justin Hsia.  All rights reserved.  Permission is
# hereby granted to students registered for University of Washington
# CSE 333 for use solely during Winter Quarter 2022 for purposes of
# the course.  No other use, copying, distribution, or modification
# is permitted without prior written consent. Copyrights for
# third-party components of this work must be honored.  Instructors
# interested in reusing these course materials should contact the
# author.

CXX = g++
SOURCES = SocketUtil.cc ex11.cc

ex11: $(SOURCES)
	$(CXX) -g -Wall -std=c++17 -o $@ $^

clean:
	/bin/rm -f -r *~ *.o ex11 ex11.dSYM SocketUtil.dSYM