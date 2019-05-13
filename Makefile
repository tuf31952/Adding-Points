# define a target for the application
#
all: p02.exe
#
p02.exe: p02.cc p02.cpp
	g++ -g -O2 -lm p02.cc p02.cpp -o p02.exe
#
p02.o: p02.cc p02.h
	g++ -O2 -c p02.cc -o p02.o
#
clean:
	rm -f p02.o p02.exe
#
# end of file
