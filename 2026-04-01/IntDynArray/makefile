# Makefile for main
# Y. Liow
#------------------------------------------------------------------------------
# Macros
#------------------------------------------------------------------------------
CXX       = g++
CXXFLAGS  = -c -std=c++2a -fmax-errors=3 -Wall -Werror -Wextra -Wpedantic \
	    -Wconversion
LINK      = g++
LINKFLAGS = 
OBJS      = main.o IntDynArray.o
EXE       = main.exe

#------------------------------------------------------------------------------
# Executable
#------------------------------------------------------------------------------
$(EXE):	$(OBJS)
	$(LINK) $(OBJS) -o $(EXE) $(LINKFLAGS)

asan: $(OBJS)
	$(LINK) $(OBJS) -o $(EXE) $(LINKFLAGS) -g -fsanitize=address
#------------------------------------------------------------------------------
# Object files
#------------------------------------------------------------------------------
main.o:	main.cpp IntDynArray.h
	$(CXX) $(CXXFLAGS) main.cpp -c -o main.o

IntDynArray.o:	IntDynArray.cpp IntDynArray.h
	$(CXX) $(CXXFLAGS) IntDynArray.cpp -c -o IntDynArray.o

#------------------------------------------------------------------------------
# Utilities
#------------------------------------------------------------------------------
clean:
	rm -rf $(OBJS) $(EXE)
c:
	rm -rf $(OBJS) $(EXE)

run:
	ASAN_OPTIONS=detect_leaks=1 ./$(EXE)
r:
	ASAN_OPTIONS=detect_leaks=1 ./$(EXE)
