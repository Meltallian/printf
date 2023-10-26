# Variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
LIBFT = libft/libft.a
PRINTF_SRC = $(wildcard *.c)
PRINTF_OBJ = $(PRINTF_SRC:.c=.o)
INCLUDES_DIR = -I./includes -I./libft/includes

# Default rule
all: $(NAME)

# This won't be called if the files don't exist or are not updated
$(PRINTF_OBJ): %.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES_DIR) -c $< -o $@

$(LIBFT):
	make -C ./libft

$(NAME): $(LIBFT) $(PRINTF_OBJ)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(PRINTF_OBJ)

clean:
	make clean -C ./libft
	rm -f $(PRINTF_OBJ)

fclean: clean
	make fclean -C ./libft
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
