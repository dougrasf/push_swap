FLAG = -Wall -Wextra -Werror

NAME = push_swap

INC = -I ./include

SRC =	./src/instructions/swap.c \
		./src/instructions/push.c \
		./src/instructions/rotate.c \
		./src/instructions/reverse.c \
		./src/mandatory/push_swap.c \
		./src/mandatory/sort.c \
		./src/mandatory/sort_utils.c \

LIBFTPATH = ./libft

LIBFT = ./libft/libft.a

CC = cc

all: $(NAME)

${NAME}:
	make -C ${LIBFTPATH}
	$(CC) $(SRC) $(LIBFT) $(FLAG) $(INC) -o $(NAME)

clean:
	make fclean -C ${LIBFTPATH}

fclean: clean
	rm ${NAME}

re: fclean all

.PHONY: all clean fclean re