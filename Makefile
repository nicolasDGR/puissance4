#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/22 12:20:03 by nd-heyge          #+#    #+#              #
#    Updated: 2014/02/23 17:39:44 by nd-heyge         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = lem-in

SRCC = main.c parser.c collect.c check_global.c check_pipe.c check_room.c

SRCO = $(SRCC:.c=.o)

all: $(NAME)

%.o:	%.c
	cc -g -Wall -Werror -Wextra -c $< -o $@ -I libft/includes

makefile_fclean:
	make -C libft/ fclean

$(NAME): $(SRCO)
	make -C libft/
	gcc -g -Wall -Werror -Wextra -c $(SRCC) -I libft/includes/
	gcc -g -o $(NAME) $(SRCO) -L libft/ -lft -L/usr/X11/lib -lmlx -lXext -lX11

clean : makefile_fclean
	/bin/rm -f $(SRCO)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
