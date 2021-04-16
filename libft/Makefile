# Name

NAME = libft.a

# Paths and files

STR = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_putchar.c ft_putnstr.c ft_putstr.c ft_putnbr.c
FD = ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c
MATH = ft_atoi.c ft_itoa.c ft_antoi.c
MEM = ft_bzero.c ft_calloc.c ft_memccpy.c  ft_memchr.c ft_memcpy.c ft_memcmp.c ft_memmove.c ft_memset.c
LST = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c
SRC = ${STR} ${FD} ${MATH} ${MEM} ${LST}
SRCS = ${SRC}
# ${addprefix srcs/, ${SRC}}
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