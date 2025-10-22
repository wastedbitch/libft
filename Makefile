NAME = libft.a
SRC = ft_atoi.c ft_isalnum.c ft_isdigit.c ft_strchr.c ft_strlcpy.c ft_strnstr.c ft_substr.c\
      ft_atoi.o ft_isalpha.c ft_isprint.c ft_memcpy.c ft_memset.c ft_strjoin.c ft_strlen.c ft_strrchr.c ft_tolower.c\
      ft_bzero.c ft_isascii.c ft_strlcat.c ft_strncmp.c ft_strtrim.c ft_toupper.c\

OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
