NAME := libft.a

DIR_O := objs
FLAGS := -Wall -Wextra -Werror -ggdb -O0

SRC := ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlcat.c ft_strlcpy.c ft_strlen.c
OBJ := $(addprefix $(DIR_O)/,$(SRC:.c=.o))

HEAD := .

all: $(NAME)

$(NAME): mes $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\033[34mDone!\033[0m"

mes:
	@echo "\033[34mCompiling...\033[0m"

$(DIR_O):
	@mkdir -p $(DIR_O)

$(OBJ): $(DIR_O)/%.o: %.c $(wildcard $(HEAD)/*.h) | $(DIR_O)
	@gcc $(FLAGS) -c $(INCLUDES) -o $@ $<

clean:
	/bin/rm -rf $(DIR_O)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
