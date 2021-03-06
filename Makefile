CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -pedantic-errors
CXXFLAGS += -Wall
LDFLAGS = -lboost_date_time
OBJS = main.o menu.o Building.o University.o Person.o Student.o Instructor.o validateInt.o
SRCS = main.cpp menu.cpp Building.cpp University.cpp Person.cpp Student.cpp Instructor.cpp validateInt.cpp
HEADERS = menu.hpp Building.hpp University.cpp Person.hpp Student.hpp Instructor.hpp validateInt.o


main: ${OBJS} ${HEADERS}
	${CXX} ${CXXFLAGS} ${OBJS} -o main

${OBJS}:${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

.PHONY: clean 

clean:
	-rm ${OBJS} main