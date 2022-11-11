# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rouali <rouali@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/29 15:19:00 by rouali            #+#    #+#              #
#    Updated: 2022/10/29 15:19:01 by rouali           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

INC 		= ft_printf.h

SRCS		=	ft_check.c\
				ft_lx.c\
				ft_mx.c\
				ft_pointer.c\
				ft_printf.c\
				ft_putchar.c\
				ft_putnbr.c\
				ft_putstr.c\
				ft_unsigned.c

OBJS		=	ft_check.o\
				ft_lx.o\
				ft_mx.o\
				ft_pointer.o\
				ft_printf.o\
				ft_putchar.o\
				ft_putnbr.o\
				ft_putstr.o\
				ft_unsigned.o

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror -c

all:		$(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I $(INC) $<

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:		fclean all
