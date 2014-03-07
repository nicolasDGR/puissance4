/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/12 17:01:34 by nd-heyge          #+#    #+#             */
/*   Updated: 2014/02/12 17:04:02 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void				*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char*)(b);
	while (len)
	{
		*ptr = (unsigned char)(c);
		ptr++;
		len--;
	}
	return (b);
}
