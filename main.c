/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 21:04:50 by nd-heyge          #+#    #+#             */
/*   Updated: 2014/03/08 14:29:44 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/puissance4.h"

int		whoplaysfirst(void)
{
	int	player;

	srand(time(NULL));
	player = rand() % 2;
	if (player)
		ft_putendl("It's for YOU to start!");
	else
		ft_putendl("It's for ME to start!");
	return (player);
}

int		main(int ac, char **av)
{
	int		height;
	int		width;
	int		player;

	(void)av;
	if (error_usage(ac) == -1)
		return (-1);
	ft_putendl("\n\tWelcome to puissance 4");
	ft_putendl("");
	init_gameboard(&width, &height);
	put_gameboard(width, height);
	player = whoplaysfirst();
	return (0);
}
turn (0);
}
