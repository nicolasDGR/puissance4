/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/07 10:55:03 by nd-heyge          #+#    #+#             */
/*   Updated: 2013/12/07 13:59:51 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	if (s1 == NULL && s2)
		str = ft_strdup(s2);
	else if (s2 == NULL && s1)
		str = ft_strdup(s1);
	else if (s2 == NULL && s1 == NULL)
		return (NULL);
	else
	{
		str = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
		if (str)
		{
			str = ft_strcat(str, s1);
			str = ft_strcat(str, s2);
		}
	}
	return (str);
}
