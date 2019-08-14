name = libft.a
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
CFLAG = -Wall -WError -Wextra
CC = gcc


all: $(NAME)

$(NAME): ${OBJ}
	${CC} ${CFLAG} -o $@ ${OBJ}


clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re