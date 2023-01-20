FLAG = -Wall -Wextra -Werror

NAME = push_swap

INC = -I ./include

SRC =	./src/push_swap.c \
		./src/instructions/swap.c \
		./src/instructions/push.c \
		./src/instructions/rotate.c \
		./src/instructions/reverse.c

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