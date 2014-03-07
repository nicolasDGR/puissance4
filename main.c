/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 21:04:50 by nd-heyge          #+#    #+#             */
/*   Updated: 2014/03/07 23:20:26 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/puissance4.h"

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

int		main(int ac, char **av)
{
	int		height;
	int		width;

	(void)av;
	if (error_usage(ac) == -1)
		return (-1);
	ft_putendl("\n\tWelcome to puissance 4");
	ft_putendl("");
	init_gameboard(&width, &height);
	put_gameboard(width, height);
	return (0);
}
