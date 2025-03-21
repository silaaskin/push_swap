NAME = push_swap

CC = cc
CFLAGS = -Wall -Werror -Wextra

SRC =	handle_errors.c \
		ft_atol.c \
		free_error.c \
		split.c \
		init_b_to_a.c \
		init_stack_a.c \
		push_swap.c \
		init_stack_nodes.c \
		libft_utils.c \
		min.c \
		swap.c \
		move.c \
		push.c \
		reverse_rotate.c \
		rotate.c \
		stack_sort.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re