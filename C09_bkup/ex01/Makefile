SRCS	= ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a 
R

CC			= gcc 

CFLAGS		= -Wall -Werror -Wextra

.c.o:
			${CC} -Wall -Werror -W -c $< -o ${<:.c=.o}

${NAME}  = ${OBJS}
			${CC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
