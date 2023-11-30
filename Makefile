# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asodor <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/26 20:18:11 by asodor            #+#    #+#              #
#    Updated: 2023/11/29 00:09:36 by asodor           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_putstr.c\
	   ft_putnbr.c\
	   ft_putchar.c\
	   ft_format.c\
	   ft_printf.c\
	   ft_putaddr.c\
	   ft_strlen.c\
	   ft_unsigned.c\
	   ft_puthex.c\

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

OBJS = ${SRCS:.c=.o}

${NAME} : ${OBJS}
	ar rc ${NAME} ${OBJS}

all : ${NAME}

clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}

re: fclean all
