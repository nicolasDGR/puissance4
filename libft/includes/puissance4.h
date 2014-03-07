/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puissance4.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 21:18:39 by nd-heyge          #+#    #+#             */
/*   Updated: 2014/03/07 23:19:22 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUISSANCE4_H
# define PUISSANCE4_H

# include "libft.h"

/*
** main.c
*/

int		ft_is_number(char *);

/*
** error.c
*/

void	put_error_sizeboard(char *, int);
int		error_usage(int);

/*
** board.c
*/

void	init_gameboard(int *, int *);
void	put_gameboard(int, int);

#endif /* !PUISSANCE4_H */
