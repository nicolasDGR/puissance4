/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 21:04:50 by nd-heyge          #+#    #+#             */
/*   Updated: 2014/03/09 16:45:05 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/puissance4.h"

void		whoplaysfirst(t_p4 *p4)
{
	int	player;

	srand(time(NULL));
	player = rand() % 2;
	if (player == PLAYER)
	{
		ft_putendl("It's for YOU to start!");
		player_start(p4, player);
	}
	else if (player == CPU)
	{
		ft_putendl("It's for ME to start!");
		computer_start(p4, player);
	}
}

t_p4	*init_struct(t_p4 *p4, char **av)
{
	t_p4	*tmp;
	int		i;

	tmp = (t_p4 *)malloc(sizeof(t_p4 *));
	tmp->width = ft_atoi(av[1]);
	tmp->height = ft_atoi(av[2]);
	tmp->gameboard = (char**)malloc(sizeof(char*) * tmp->width);
	i = 0;
	while (i < tmp->width)
	{
		tmp->gameboard[i] = (char*)malloc(sizeof(char) * tmp->height);
		i++;
	}
	p4 = tmp;
	free(tmp);
	return (p4);
}

int		main(int ac, char **av)
{
	t_p4		*p4;

	p4 = NULL;
	if (error_usage(ac, av) == -1)
		return (-1);
	ft_putendl("\n\tWelcome to puissance 4");
	ft_putendl("");
	p4 = init_struct(p4, av);
	put_gameboard(p4);
	whoplaysfirst(p4);
	return (0);
}
