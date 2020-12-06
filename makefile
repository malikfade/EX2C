CC = gcc
AR = ar -rcs
OBJECTS_MAIN = main.o
OBJECTS_LIB = myBank.o
FLAGS = -Wall

all: mymaths mymathd mains maind
mains: $(OBJECTS_MAIN) libmyMath.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libmyMath.a
maind: $(OBJECTS_MAIN) libmyMath.so
	$(CC) $(FLAGS) -o maind $(OBJECTS_MAIN) ./libmyMath.so
mymaths: libmyMath.a
libmyMath.a: $(OBJECTS_LIB) 
	$(AR) libmyMath.a $(OBJECTS_LIB)
mymathd: libmyMath.so
libmyMath.so: $(OBJECTS_LIB) 
	$(CC) -shared -o libmyMath.so $(OBJECTS_LIB)
main.o: main.c myBank.h
	$(CC) $(FLAGS) -c main.c
myBank.o: myBank.c myBank.h
	$(CC) $(FLAGS) -fPIC -c myBank.c


.PHONY: clean all mymaths mymathd

clean:
	rm -f *.o *.a *.so mains maind

