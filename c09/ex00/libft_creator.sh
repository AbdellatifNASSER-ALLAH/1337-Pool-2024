#**************************************************************************** #
# #
# :: : :: :: :: ::#
#libft _creator.sh : + : : + : : + : #

#+ : + + : + + : + #
#By : abdnasse < abdnasse @student .1337.ma> + # + + : ++# + #
#+ #+ #+ #+ #+ #+ + #+ #
#Created : 2024 / 07 / 16 04 : 33 : 33 by abdnasse # + # # + # #
#Updated : 2024 / 07 / 16 04 : 33 : 37 by abdnasse## # ########.fr #
# #
#**************************************************************************** #

#!/bin/sh

gcc -c -Wall -Wextra -Werror ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
ranlib libft.a
