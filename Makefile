SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
CFLAG = -Wall -Wextra
CC = gcc
theProgram: ${OBJ}
	${CC} ${CFLAG} -o $@ ${OBJ}

.PHONY: clean
clean:
	rm -f *.o