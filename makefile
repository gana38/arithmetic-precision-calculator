
OBJ = $(patsubst %.c,%.o,$(wildcard *.c))
res.out : $(OBJ)
	gcc -o $@ $^
clean :
	rm *.exe *.o

