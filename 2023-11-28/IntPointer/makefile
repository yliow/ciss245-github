# Makefile for main
# Y. Liow
#------------------------------------------------------------------------------
# Macros
#------------------------------------------------------------------------------
CXX       = g++
CXXFLAGS  = -g -Wall -fmax-errors=3
LINK      = g++
LINKFLAGS = 
OBJS	  = *.o
EXE       = main.exe

#------------------------------------------------------------------------------
# Executable
#------------------------------------------------------------------------------
$(EXE): main.cpp 	
	$(CXX) *.cpp -o $(EXE) $(LINKFLAGS) -g -fsanitize=address

clean:
	rm -rf $(OBJS) $(EXE)
c:
	rm -rf $(OBJS) $(EXE)

run:
	ASAN_OPTIONS=detect_leaks=1 ./$(EXE)
r:
	ASAN_OPTIONS=detect_leaks=1 ./$(EXE)
