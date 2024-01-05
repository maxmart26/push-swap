NAME = push_swap
OBJ = ft_putstr.c\
		push_swap.c\
		main.c\
		algo_first.c\
		algo_first_2.c\
		algo_first_3.c\
		algo_swap.c\
		algo_swap_2.c\
		error.c\
		ft_strlcpy.c\
		ft_split.c\
		ft_calloc.c\
		ft_bzero.c\
		ft_pp.c\
		ft_rrr.c\
		ft_rr.c\
		ft_ss.c\
		end.c
CC = cc
CFLAGS = -Werror -Wextra -Wall -g3
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
