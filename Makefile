NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -f
OBJS = $(SRCS:.c=.o)

SRCS = ft_printf.c\
		ft_printf_utils.c\
		ft_printf_utils2.c

all : ${NAME}

${NAME} : ${OBJS}
	${AR} ${NAME} $^

%.o : %.c ft_printf.h
	${CC} ${CFLAGS} -c $< -o  $@

clean :
	${RM} ${OBJS} 

fclean : clean
	${RM} ${NAME}

re : fclean all 

.PHONY : fclean clean re