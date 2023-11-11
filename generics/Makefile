SRC=comp-int.c comp-float.c zameni.c sort.c main.c
OBJ=comp-int.o comp-float.o zameni.o sort.o main.o

CC=gcc
PROGRAM=a.out
CC_ARGS=

$(PROGRAM): $(OBJ)
	$(CC) $(CC_ARGS) -o $@ $(OBJ)

.c.o:
	$(CC) $(CC_ARGS) -c $*.c

clean:
	rm $(PROGRAM) *.o
