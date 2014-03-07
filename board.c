/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 22:48:34 by nd-heyge          #+#    #+#             */
/*   Updated: 2014/03/08 00:02:43 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/puissance4.h"

/*
** To count powers of 10 of lines to display
*/

int		power_ten(int nbr)
{
	int		i;

	i = 0;
	while (nbr >= 10)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

/*
** To display the gameboard
*/

void	put_gameboard(int width, int height)
{
	int		i;
	int		j;
	int		puiss;

	j = 0;
	ft_putendl("");
	while (j < height)
	{
		i = 0;
		ft_putstr("\t");
		while (i < width)
		{
			ft_putstr(". ");
			puiss = 0;
			while (puiss < power_ten(i + 1))
			{
				ft_putstr(" ");
				puiss++;
			}
			i++;
		}
		ft_putendl("");
		j++;
	}
	i = 0;
	ft_putstr("\t");
	while (i < width)
	{
		ft_putnbr(i);
		ft_putstr(" ");
//		j = 0;
//		while (j < power_ten(i))
//		{
//			ft_putstr(" ");
//			j++;
//		}
		i++;
	}
	ft_putendl("");
}

/*
** To initialize the gameboard according to the entries of player
*/

void	init_gameboard(int *width, int *height)
{
	char	*line;

	while (42)
	{
		ft_putstr("how many columns to your gameboard, do you ?  ");
		get_next_line(0, &line);
		*width = ft_atoi(line);
		if (ft_is_number(line) == 0 && *width >= 6)
		{
			free(line);
			ft_putstr("how many lines to your gameboard, do you ?  ");
			get_next_line(0, &line);
			*height = ft_atoi(line);
			if (ft_is_number(line) == 0 && *height >= 7)
				break ;
			else
				put_error_sizeboard("lines", 7);
		}
		else
			put_error_sizeboard("columns", 6);
	}
	free(line);
}
