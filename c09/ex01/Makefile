# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/16 18:27:31 by abdnasse          #+#    #+#              #
#    Updated: 2024/07/16 22:00:32 by abdnasse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror -Iincludes/ft.h

LIB_NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
		  srcs/ft_swap.c srcs/ft_strlen.c

OBJS = $(SRCS:.c=.o)

all: $(LIB_NAME) 

$(LIB_NAME): $(OBJS)
	ar rc $@ $^
	ranlib $@

$(SRCS/%.o): $(SRCS/%.c)
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(LIB_NAME)

re: fclean all

.PHONY : all clean fclean re
