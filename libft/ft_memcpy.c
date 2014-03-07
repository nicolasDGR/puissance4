/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/12 16:36:51 by nd-heyge          #+#    #+#             */
/*   Updated: 2014/02/12 16:38:16 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		*ft_memcpy(void *s1, const void *s2, size_t n)
{
	void	*str;

	str = s1;
	while (n)
	{
		*((char*)s1) = *((char*)s2);
		s1 = (void*)((char*)s1 + 1);
		s2 = (void*)((char*)s2 + 1);
		n--;
	}
	return (str);
}
