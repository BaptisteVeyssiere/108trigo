##
## Makefile for 107transfer in /home/VEYSSI_B/rendu/Maths/107transfer
##
## Made by Baptiste veyssiere
## Login   <VEYSSI_B@epitech.net>
##
## Started on  Mon Feb 29 15:55:18 2016 Baptiste veyssiere
## Last update Mon Mar 14 15:20:18 2016 Baptiste veyssiere
##

NAME	= 108trigo

SRCS	= src/108trigo.c

OBJS	= $(SRCS:.c=.o)

RM	= rm -f

CC	= gcc

LDFLAGS	= -lm

CFLAGS	= -I./include

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(LDFLAGS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
