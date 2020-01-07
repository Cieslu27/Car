CPP    = g++
RM     = rm -f
OBJS   = main.o \
         Car.o

LIBS   =
CFLAGS = -fexceptions

.PHONY: bin/Release/zaliczenie.exe clean clean-after

all: bin/Release/zaliczenie.exe

clean:
	$(RM) $(OBJS) bin/Release/zaliczenie.exe

clean-after:
	$(RM) $(OBJS)

bin/Release/zaliczenie.exe: $(OBJS)
	$(CPP) -O2 -s -Wall -o $@ $(OBJS) $(LIBS)

main.o: main.cpp car.h
	$(CPP) -O2 -s -Wall -c $< -o $@ $(CFLAGS)

Car.o: Car.cpp Car.h
	$(CPP) -O2 -s -Wall -c $< -o $@ $(CFLAGS)

