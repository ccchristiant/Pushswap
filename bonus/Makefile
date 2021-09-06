##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## ctran
##

SRC	=	src/pushswap.c	\
		src/my_params_to_list.c	\
		src/my_list_size.c	\
		src/number_stages_negatives.c	\
		src/basic_ops.c	\
		src/advanced_ops.c	\
		src/radix_pos.c	\
		src/radix_neg.c

OBJ	=	$(SRC:.c=.o)

TEST	=	tests/tests_pushswap.c

BINTEST	=	unit_tests

CC	=	gcc

CFLAGS	=	-Wall -Wextra -g3

CPPFLAGS	=	-Iinclude

LDFLAGS	=	-Llib/my

LDLIBS	=	-lmy -lcriterion

NAME	=	push_swap

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS) $(LDLIBS) $(CPPFLAGS)

unit_tests:	fclean $(NAME)
	$(CC) -o $(BINTEST) $(OBJ) $(LDFLAGS) $(LDLIBS) $(CPPFLAGS)

run_tests:	$(NAME)
	./$(BINTEST)

clean:
	make -C lib/my clean
	rm -f $(OBJ)

fclean:	clean
	make -C lib/my fclean
	rm -f $(NAME) $(BINTEST)

re:	fclean all

.PHONY: all clean fclean re
