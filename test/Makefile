CC=gcc
RM=rm -rf
CXX=g++
CFLAGS= -m64 -pipe -O2 -Wall -W 

all: json
OBJS = jsonparser.o main.o

%.o:%.cpp
	$(CXX) -c $(CFLAGS) -o  $@  $<

json : $(OBJS)
	$(CXX) -o json $(OBJS)

clean:
	$(RM) *.o 

