#ifndef P4_H
# define P4_H

# include <libft.h>
# include <get_next_line.h>

# define PLAYER		'O'
# define IA			'X'

typedef struct s_p4		t_p4;

struct					s_p4
{
	int			nb_col;
	int			nb_line;
	char			*board;
	int			user_move;
};

int						start_p4_game(t_p4 *s_p4);

#endif
