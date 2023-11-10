SRC=comp-int.c comp-float.c sort.c main.c
OBJ=comp-int.o comp-float.o sort.o main.o

CC=gcc
PROGRAM=a.out

$(PROGRAM): $(OBJ)
	$(CC) -o $@ $(OBJ)

.c.o:
	$(CC) -c $*.c

clean:
	rm $(PROGRAM) *.o
