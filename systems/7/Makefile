CXX = g++
OBJS = Vector.o ex7.o
EXE  = ex7
HEADERS = Vector.h
CPPFLAGS = -Wall -g -std=c++17

# default target
$(EXE): $(OBJS)
	$(CXX) $(CPPFLAGS) -o $(EXE) $(OBJS)

# source files
%.o: %.cc $(HEADERS)
	$(CXX) $(CPPFLAGS) -c $<

# phony target - remove generated files and backups
clean:
	rm -rf $(EXE) *.o *~ *.dSYM