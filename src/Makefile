CC=gcc

CXX=g++

LD=ld

all:
	${CXX} -c *.cc; ${CXX} -o jemu-arm *.o

clean:
	rm *.o jemu-arm.exe

.c.o:
	${CXX} -c $<
