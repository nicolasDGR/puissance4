/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/25 15:07:00 by nd-heyge          #+#    #+#             */
/*   Updated: 2014/03/07 22:48:27 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/puissance4.h"

/*
** Error message for the size of the gameboard
*/

void	put_error_sizeboard(char *hori_verti, int nbr)
{
	ft_putstr("\nError ");
	ft_putstr(hori_verti);
	ft_putstr(" isn't a number or it is less than a ");
	ft_putnbr(nbr);
	ft_putendl(". Try again !\n");
}

/*
** Error message usage
*/

int		error_usage(int ac)
{
	if (ac > 1)
	{
		ft_putendl("puissance4 : error usage ./puissance4");
		return (-1);
	}
	return (0);
}
