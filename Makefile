NAME = push_swap
OBJ = error.c\
		push_swap.c\
		main.c\
		algo_first.c\
		algo_swap.c\
		ft_putstr.c
CC = cc
CFLAGS = -Werror -Wextra -Wall
SRCS = ${OBJ}

OBJS = ${SRCS:.c=.o}

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	cc ${CFLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean;
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
