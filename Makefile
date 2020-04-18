EXECS = Tester
OBJS = Person.o Tester.o Student.o

CC = g++
CCFLAGS = -std=c++11 -Wall -Wno-deprecated -Werror=return-type -g

all: $(EXECS)

Tester: $(OBJS)
	$(CC) $(CCFLAGS) $^ -o $@

%.o: %.cpp *.h
	$(CC) $(CCFLAGS) -c $<

%.o: %.cpp
	$(CC) $(CCFLAGS) -c $<

clean:
	/bin/rm -f a.out $(OBJS) $(EXECS)
