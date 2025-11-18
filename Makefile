# ---------------------------------------------------------------------------- #
# Nom de votre bibliothèque
NAME = libft.a

# ---------------------------------------------------------------------------- #
# Compilateur et ses options
# -Wall -Wextra -Werror sont les "flags de 42"
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Commande pour archiver les fichiers
AR = ar rcs

# ---------------------------------------------------------------------------- #
# Vos fichiers source (.c)
# (Basé sur votre image)
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

# ---------------------------------------------------------------------------- #
# Fichiers objets (.o)
# Transforme automatiquement la liste .c en .o
OBJS = $(SRCS:.c=.o)

# ---------------------------------------------------------------------------- #
# RÈGLES
# ---------------------------------------------------------------------------- #

# Règle "all" (défaut) : crée la bibliothèque
all: $(NAME)

# Règle pour créer la bibliothèque (libft.a)
# Dépend des fichiers objets (OBJS)
$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "✅ Bibliothèque libft.a créée !"

# Règle pour compiler un .c en .o
# Dit à 'make' comment transformer n'importe quel .c en .o
# La dépendance "libft.h" force la recompilation si vous modifiez le header
%.o: %.c libft.h
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "   ... compilé" $<

# Règle "clean" : supprime les fichiers objets (.o)
clean:
	@rm -f $(OBJS)
	@echo "🧹 Fichiers .o supprimés"

# Règle "fclean" : supprime les .o ET la bibliothèque .a
fclean: clean
	@rm -f $(NAME)
	@echo "🧹 Bibliothèque libft.a supprimée"

# Règle "re" : fclean + all (nettoie tout et recompile)
re: fclean all

# Prévient 'make' que 'all', 'clean', etc. ne sont pas de vrais fichiers
.PHONY: all clean fclean re