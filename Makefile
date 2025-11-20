NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

AR = ar rcs


SRCS = ft_atoi.c \
       ft_bzero.c \
       ft_calloc.c \
       ft_isalpha.c \
       ft_itoa.c \
       ft_memchr.c \
       ft_memcmp.c \
       ft_memcpy.c \
       ft_memmove.c \
       ft_memset.c \
       ft_split.c \
       ft_strchr.c \
       ft_strdup.c \
       ft_strjoin.c \
       ft_strlcat.c \
       ft_strlcpy.c \
       ft_strlen.c \
       ft_strncmp.c \
       ft_strtrim.c \
       ft_substr.c \
       ft_tolower.c \
       ft_toupper.c \
       ft_strmapi.c \
       ft_striteri \
       ft_putchar_fd \
       ft_putstr_fd \
       ft_putendl_fd \
       ft_putnbr_fd \

OBJS = $(SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "✅ Bibliothèque libft.a créée !"


%.o: %.c libft.h
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "   ... compilé" $<

clean:
	@rm -f $(OBJS)
	@echo "🧹 Fichiers .o supprimés"

fclean: clean
	@rm -f $(NAME)
	@echo "🧹 Bibliothèque libft.a supprimée"

re: fclean all

.PHONY: all clean fclean re