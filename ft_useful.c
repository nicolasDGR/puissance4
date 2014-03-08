/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_useful.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 13:07:22 by nd-heyge          #+#    #+#             */
/*   Updated: 2014/03/08 13:10:58 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/puissance4.h"

/*
** To count the number of powers of 10
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
** To check if the character's string is composed numbers
*/

int		ft_is_number(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]) == 0)
			break ;
		i++;
	}
	if (i != (int)ft_strlen(str))
		return (-1);
	return (0);
}
