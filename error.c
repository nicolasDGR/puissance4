/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/25 15:07:00 by nd-heyge          #+#    #+#             */
/*   Updated: 2014/03/07 21:48:25 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/puissance4.h"

/*
** Error message usage
*/

int		error_usage(int ac)
{
	(void)av;
	if (ac > 1)
	{
		ft_putendl("puissance4 : error usage ./puissance4");
		return (-1);
	}
	return (0);
}
