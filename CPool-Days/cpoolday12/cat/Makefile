##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## makefile
##

SRC = 	cat.c
OBJ = 	$(SRC:.c=.o)
NAME = compile

all: $(NAME)

$(NAME): 	$(OBJ)
		gcc -o cat $(OBJ) -I../include -L../lib/my -lmy
		make clean

clean:
	rm -f $(OBJ)
