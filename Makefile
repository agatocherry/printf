# Name

NAME = libftprintf.a

# Paths and files

SRCS =	src/arguments.c \
		src/flags.c \
		src/init.c \
		src/printf.c
OBJS = ${SRCS:.c=.o}

#Rules

all : $(NAME)

.c.o:
	@$(CC) $(CFLAGS) -I includes -c $< -o $(<:.c=.o)

$(NAME) : $(OBJS)
	@ar rc $@ $^
	@echo "Compiling $(NAME) done"

clean :
	@echo "! Removed objects files"
	@rm -rf $(OBJS)

fclean : clean
	@echo "! Removed $(NAME)"
	@rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re