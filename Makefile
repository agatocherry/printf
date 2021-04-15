NAME =			libftprintf.a

SRC =			src/printf.c \
				src/init.c \
				src/flags.c \
				src/arguments.c \

OBJ =			$(subst .c,.o,$(SRC))

CFLAGS =		-I includes/ -I libft/ # -Wall -Werror -Wextra -I includes/ -I libft/
CC =			gcc
LD =			ar rc

all:			$(NAME)

OBJ :			$(OBJ)
				$(CC) -c $(CFLAGS) $(SRC)

$(NAME):		$(OBJ)
				make -C libft/
				mv libft/libft.a libftprintf.a
				$(LD) $(NAME) $(OBJ)
				ranlib $(NAME)

clean:
				make -C libft/ -f Makefile clean
				rm -f $(OBJ)

fclean:			clean
				make -C libft/ -f Makefile fclean
				rm -f $(NAME)

bonus:			$(NAME)

re:				fclean all

.PHONY:			clean fclean all re