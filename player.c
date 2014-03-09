/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 14:31:04 by nd-heyge          #+#    #+#             */
/*   Updated: 2014/03/09 16:36:28 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/puissance4.h"

/*
** To add a piece in the gameboard
*/

void	add_piece(t_p4 *p4, int player)
{
	int	i;

	i = 0;
	while (i < p4->width)
	{
		if (p4->gameboard[i][0] == 0)
		{
			if (player == PLAYER)
				p4->gameboard[i * p4->height][0] = 'O';
			else if (player == CPU)
				p4->gameboard[i * p4->height][0] = 'X';
			break ;
		}
		i++;
	}
}

/*
** To read the next player's movement
*/

void	read_move(t_p4 *p4)
{
	char *line;

	while (42)
	{
		ft_putendl("What's your next move ?");
		get_next_line(0, &line);
		if (ft_is_number(line) != -1
			&& ft_atoi(line) >= p4->width && ft_atoi(line) <= 0)
		{
			add_piece(p4, PLAYER);
		}
	}
	put_gameboard(p4);
	computer_start(p4, CPU);
}

/*
** To make play the player
*/

void	player_start(t_p4 *p4, int player)
{
	(void)player;
	read_move(p4);
}

/*
** To make play the computer
*/

void	computer_start(t_p4 *p4, int player)
{
	(void)p4;
	(void)player;
}
