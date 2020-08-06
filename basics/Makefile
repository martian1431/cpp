CXX = g++
CXXFLAGS = -std=c++0x -Wall -pedantic-errors -g

SRCS =  main.cpp Box.cpp Line.cpp
#SRCS =  $(shell find . -name ".cpp")
OBJS = ${SRCS:.cpp=.o}
HEADERS = Box.h Line.h

MAIN = myprog

all: ${MAIN}
	$(info Simple application named myprog has been compiled)

${MAIN}: ${OBJS}
		${CXX} ${CXXFLAGS} ${OBJS} -o ${MAIN}

.cpp.o:
		${CXX} ${CXXFLAGS} -c $< -o $@

clean:
		${RM} {PROGS} ${OBJS} *.o *~.