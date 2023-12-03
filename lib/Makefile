##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

NAME		=	libmy.a

CPPFLAGS	=	-I ./include/ -W -Wall -Wextra

OBJ			=	$(SRC:.c=.o)

SRC	    	=	my_putchar.c		\
				my_putstr.c			\
				my_strcat.c			\
				my_strcpy.c			\
				my_strlen.c			\
				my_putnbr.c			\

all :	$(NAME)
$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean :	clean
	$(RM) $(NAME)

re :	fclean all

.PHONY:	all clean fclean re
