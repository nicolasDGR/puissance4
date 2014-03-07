/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/03 12:13:32 by nd-heyge          #+#    #+#             */
/*   Updated: 2013/12/29 22:46:24 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*out;

	out = (t_list*)ft_memalloc(size);
	if (out == NULL)
		return (NULL);
	return (out);
}
