##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## 
##

NAME	= compile

CC	= gcc

SRC	= do_op.c

OBJ	= $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc do_op.c -o "do-op" -I../include/ -L../lib/my/ -lmy

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f do-op

re: fclean all