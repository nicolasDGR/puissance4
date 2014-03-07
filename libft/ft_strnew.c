/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/28 17:18:07 by nd-heyge          #+#    #+#             */
/*   Updated: 2014/01/26 19:49:55 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	str = (char *)ft_memalloc(size);
	if (str == NULL)
		return (NULL);
	return (ft_memset(str, '\0', size + 1));
}
