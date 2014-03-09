/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gameboard.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 22:48:34 by nd-heyge          #+#    #+#             */
/*   Updated: 2014/03/09 16:37:25 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/puissance4.h"

/*
** To display numbers of the gamboard
*/

void	putnbr_gameboard(t_p4 *p4)
{
	int		i;

	i = 0;
	ft_putstr("\n\t");
	while (i < p4->width)
	{
		ft_putnbr(i);
		ft_putstr(" ");
		if (power_ten(i + 1) == 0 && power_ten(p4->width) == 1)
			ft_putstr(" ");
		i++;
	}
	ft_putendl("");
}

/*
** To display a space if the column is a tens, hundreds...
*/
void	put_multiple_ten(t_p4 *p4, int i)
{
	int		puiss;

	if (power_ten(i + 1) == 0 && power_ten(p4->width) == 1)
		ft_putstr(" ");
	puiss = 0;
	while (puiss < power_ten(i + 1))
	{
		ft_putstr(" ");
		puiss++;
	}
}

/*
** To display the gameboard
*/

void	put_gameboard(t_p4 *p4)
{
	int		i;
	int		j;

	j = 0;
	while (j < p4->height)
	{
		i = 0;
		ft_putstr("\n\t");
		while (i < p4->width)
		{
			ft_putendl(&p4->gameboard[j][i]);
			if (p4->gameboard[j][i] == '\0')
				ft_putstr(". ");
			else
			{
				ft_putstr(&p4->gameboard[j][i]);
				ft_putstr(" ");
			}
			put_multiple_ten(p4, i);
			i++;
		}
		j++;
	}
	putnbr_gameboard(p4);
}
