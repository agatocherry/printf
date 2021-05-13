NAME = libftprintf.a

PRINTF = src/arguments.c \
		 src/flags.c \
		 src/init.c \
		 src/printf.c \
		 src/utils.c src/utils_u.c \
		 src/percent.c src/char.c src/string.c src/int.c src/unsigned.c src/pointer.c src/hexa_lower.c src/hexa_upper.c
SRCS = ${STR} ${FD} ${MATH} ${MEM} ${LST} ${PRINTF}

OBJS = ${SRCS:.c=.o}
CC = cc
CFLAGS = -Wall -Wextra -Werror -I includes/ -I libft/
RM	= rm -rf

.c.o:	
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:		${NAME}

$(NAME):	${OBJS}
	@make -C libft/
	@mv libft/libft.a libftprintf.a
	@ar rc ${NAME} ${OBJS}
	@ranlib ${NAME}
	@echo "Compiling $(NAME) done"

clean:
	@make -C libft/ -f Makefile clean
	@${RM} ${OBJS}
	@echo "! Removed objects files"

fclean:		clean
	@make -C libft/ -f Makefile fclean
	@${RM} ${NAME}
	@echo "! Removed $(NAME)"

re:			fclean all