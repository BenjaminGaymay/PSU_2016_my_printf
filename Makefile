##
## Makefile for  in /home/benjamin.g/delivery/CPool_bistro-matic/lib/my
## 
## Made by Benjamin GAYMAY
## Login   <benjamin.g@epitech.net>
## 
## Started on  Thu Nov  3 14:59:33 2016 Benjamin GAYMAY
## Last update Thu Nov 24 15:40:44 2016 Benjamin GAYMAY
##

SRCS	= hexa.c \
	  my_printf.c \
	  my_putchar.c \
	  my_put_nbr.c \
	  my_putstr.c \
	  my_revstr.c \
	  my_strlen.c \
	  octal_bin.c \
	  flag.c \
	  my_put_nbr_unsigned.c

RM	= rm -rf

NAME	= libmy.a

OBJS	= $(SRCS:.c=.o)

AC	= ar rc

$(NAME): $(OBJS)
	$(AC) $(NAME) $(OBJS)
	ranlib $(NAME)

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

