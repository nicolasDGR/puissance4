/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/14 16:11:03 by nd-heyge          #+#    #+#             */
/*   Updated: 2014/02/14 16:17:08 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static double		ft_convert(const char *str, t_atof res)
{
	while (*str)
	{
		if (ft_isdigit(*str))
		{
			if (res.flag == 1)
			{
				res.fp = res.fp * 10 + (*str - '0');
				res.div *= 10;
			}
			else
				res.ip = res.ip * 10 + (*str - '0');
		}
		else if (*str == '.')
		{
			if (res.flag == 1)
				return (res.sign * (res.ip + res.fp / res.div));
			else
				res.flag = 1;
		}
		else
			return (res.sign * (res.ip + res.fp / res.div));
		str++;
	}
	return (res.sign * (res.ip + res.fp / res.div));

}

double				ft_atof(const char *str)
{
	t_atof		res;

	res.ip = 0;
	res.fp = 0;
	res.div = 1;
	res.sign = 1;
	res.flag = 0;
	if (!str || !*str)
		return (0);
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		str++;
		res.sign = -1;
	}
	else if (*str == '+')
		str++;
	return (ft_convert(str, res));
}
