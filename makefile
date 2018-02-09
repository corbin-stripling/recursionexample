

CXX = g++
CXXFLAGS += -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g

OBJS = menu.o inputValidate.o single.o main.o

SRCS = menu.cpp inputValidate.cpp single.cpp main.cpp 

HEADERS = menu.hpp inputValidate.hpp single.hpp

lab5: ${OBJS} ${HEADERS}
	${CXX} ${CXXFLAGS} ${OBJS} -o lab5

${OBJS}: ${SRCS} ${HEADERS}
	${CXX} -c ${SRCS}

clean:
	rm *.o lab5
