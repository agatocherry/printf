# Name

NAME = libftprintf.a

# Paths and files

STR = libft/ft_isalnum.c libft/ft_isalpha.c libft/ft_isascii.c libft/ft_isdigit.c libft/ft_isprint.c libft/ft_strdup.c libft/ft_strjoin.c libft/ft_strlcat.c libft/ft_strlcpy.c libft/ft_strlen.c libft/ft_strmapi.c libft/ft_strncmp.c libft/ft_strnstr.c libft/ft_strrchr.c libft/ft_strtrim.c libft/ft_substr.c libft/ft_tolower.c libft/ft_toupper.c libft/ft_putchar.c libft/ft_putnstr.c libft/ft_putstr.c libft/ft_putnbr.c
FD = libft/ft_putchar_fd.c libft/ft_putendl_fd.c libft/ft_putnbr_fd.c
MATH = libft/ft_atoi.c libft/ft_itoa.c libft/ft_antoi.c
MEM = libft/ft_bzero.c libft/ft_calloc.c libft/ft_memccpy.c libft/ft_memchr.c libft/ft_memcpy.c libft/ft_memcmp.c libft/ft_memmove.c libft/ft_memset.c
LST = libft/ft_lstadd_back.c libft/ft_lstadd_front.c libft/ft_lstclear.c libft/ft_lstdelone.c libft/ft_lstiter.c libft/ft_lstlast.c libft/ft_lstmap.c libft/ft_lstnew.c libft/ft_lstsize.c
PRINTF = src/arguments.c \
		 src/flags.c \
		 src/init.c \
		 src/printf.c \
		 src/percent.c src/char.c src/string.c src/int.c
SRC = ${STR} ${FD} ${MATH} ${MEM} ${LST} ${PRINTF}
SRCS = ${SRC}
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