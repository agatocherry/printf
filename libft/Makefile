NAME =			libft.a

SRC =			ft_atoi.c ft_bzero.c ft_isalnum.c \
				ft_isalpha.c ft_isascii.c ft_isdigit.c \
				ft_isprint.c ft_itoa.c ft_calloc.c \
				ft_memccpy.c ft_memchr.c ft_memcpy.c \
				ft_memcmp.c ft_memmove.c ft_memset.c \
				ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
				ft_putstr_fd.c ft_split.c ft_strchr.c\
				ft_strdup.c ft_strjoin.c ft_strlcat.c \
				ft_strlcpy.c ft_strlen.c ft_strmapi.c \
				ft_strncmp.c ft_strnstr.c ft_strrchr.c \
				ft_strtrim.c ft_substr.c ft_tolower.c \
				ft_toupper.c ft_putchar.c ft_putstr.c \
				ft_putnstr.c ft_nblen.c ft_putnbr.c \
				ft_putui.c ft_uilen.c ft_puthexa.c \
				ft_hexalen.c ft_antoi.c \

BONUS = $(SRC)	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
				ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
				ft_lstmap.c ft_lstnew.c ft_lstsize.c \

OBJ =			$(subst .c,.o,$(SRC))
BONUS_OBJ =		$(subst .c,.o,$(BONUS))

CFLAGS =		-Wall -Werror -Wextra
CC =			gcc
LD =			ar rc

all:			$(NAME)

OBJ :			$(OBJ)
				$(CC) -c $(CFLAGS) $(SRC)

bonus :
				$(CC) $(CFLAGS) -c $(BONUS)
				$(LD) $(NAME) $(BONUS_OBJ)
				ranlib $(NAME)

$(NAME):		$(OBJ)
				$(LD) $(NAME) $(OBJ)
				ranlib $(NAME)

clean:
				rm -f $(OBJ) $(BONUS_OBJ)

fclean:			clean
				rm -f $(NAME)

re:				fclean all

.PHONY:			clean fclean all re