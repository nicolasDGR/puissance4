/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/25 15:07:00 by nd-heyge          #+#    #+#             */
/*   Updated: 2014/03/09 15:34:34 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/puissance4.h"

/*
** Error message usage
*/

int		error_usage(int ac, char **av)
{
	if (ac != 3)
	{
		ft_putstr("puissance4 : error usage");
		ft_putendl(" ./puissance4 [LINE(S)] [COLUMN(S)]");
		return (-1);
	}
	if (ft_is_number(av[1]) == -1 || ft_is_number(av[2]) == -1
		|| ft_atoi(av[1]) < 7 || ft_atoi(av[2]) < 6)
	{
		ft_putstr("./puissance4 : error lines and columns must consist");
		ft_putendl(" of numbers between 7 and 6 respectively.");
		return (-1);
	}
	return (0);
}
