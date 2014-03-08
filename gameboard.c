/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gameboard.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 22:48:34 by nd-heyge          #+#    #+#             */
/*   Updated: 2014/03/08 13:10:03 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/puissance4.h"

/*
** To display numbers of the gamboard
*/

void	putnbr_gameboard(int width)
{
	int		i;

	i = 0;
	ft_putstr("\n\t");
	while (i < width)
	{
		ft_putnbr(i);
		ft_putstr(" ");
		if (power_ten(i + 1) == 0 && power_ten(width) == 1)
			ft_putstr(" ");
		i++;
	}
	ft_putendl("");
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
	while (j < height)
	{
		i = 0;
		ft_putstr("\n\t");
		while (i < width)
		{
			ft_putstr(". ");
			if (power_ten(i + 1) == 0 && power_ten(width) == 1)
				ft_putstr(" ");
			puiss = 0;
			while (puiss < power_ten(i + 1))
			{
				ft_putstr(" ");
				puiss++;
			}
			i++;
		}
		j++;
	}
	putnbr_gameboard(width);
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
