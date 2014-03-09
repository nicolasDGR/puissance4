/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puissance4.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 21:18:39 by nd-heyge          #+#    #+#             */
/*   Updated: 2014/03/09 16:33:56 by nd-heyge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUISSANCE4_H
# define PUISSANCE4_H

# include "libft.h"
# include <time.h>

# define PLAYER	1
# define CPU		0

/*
** To handle display gameboard
** gameboard[COLUMN][LINE]
*/

typedef struct		s_p4
{
	char			**gameboard;
	int				width;
	int				height;
}					t_p4;

/*
** player.c
*/

void	add_piece(t_p4 *, int);
void	read_move(t_p4 *);
void	player_start(t_p4 *, int);
void	computer_start(t_p4 *, int);

/*
** ft_useful.c
*/

int		power_ten(int);
int		ft_is_number(char *);

/*
** error.c
*/

int		error_usage(int, char **);

/*
** gameboard.c
*/

void	putnbr_gameboard(t_p4 *);
t_p4	*init_gameboard(t_p4 *);
void	put_gameboard(t_p4 *);

#endif /* !PUISSANCE4_H */
