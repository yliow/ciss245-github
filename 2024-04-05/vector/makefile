a.out:
	g++ *.cpp -std=c++2a -fmax-errors=3 -Wall -Wextra -Wpedantic -Wconversion -g -fsanitize=address
c:
	rm -f a.out
r:
	ASAN_OPTIONS=detect_leaks=1 ./a.out
