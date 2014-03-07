/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/26 19:31:47 by nd-heyge          #+#    #+#             */
/*   Updated: 2014/02/15 12:12:09 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		*ft_memalloc(size_t size)
{
	void	*ptr;

	ptr = NULL;
	if (size)
	{
		ptr = malloc(sizeof(*ptr) * size);
		if (ptr)
		{
			ft_bzero(ptr, size);
		}
	}
	return (ptr);
}
