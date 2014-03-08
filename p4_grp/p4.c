#include <p4.h>

/*
** To count the number of powers of 10
*/

int		power_ten(int nbr)
{
	int		i;

	i = 0;
	while (nbr >= 10)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

void		print_board(t_p4 *s_p4)
{
	int				col;
	int				line;
	int				nb_space;

	nb_space = (s_p4->nb_col / 10) + 1;
	line = s_p4->nb_line - 1;
	while (line >= 0)
	{
		col = 0;
		while (col < s_p4->nb_col)
		{
			if (!(s_p4->board[col + (s_p4->nb_col * line)]))
				write(1, ".", 1);
			else
				write(1, &(s_p4->board[col + (s_p4->nb_col * line)]), 1);
			nb_space = (int)((col / 10) + 2);
			while (nb_space--)
				ft_putstr(" ");
			if (power_ten(col) == 0 && power_ten(s_p4->nb_col) == 1)
				ft_putstr(" ");
			++col;
		}
		write(1, "\n", 1);
		--line;
	}
	col = 1;
	while (col <= (s_p4->nb_col))
	{
		ft_putnbr(col);
		write(1, "  ", 2);
		if (power_ten(col) == 0 && power_ten(s_p4->nb_col) == 1)
			ft_putstr(" ");
		++col;
	}
	write(1, "\n", 1);
}

int			put_piece(t_p4 *s_p4, int col, int player)
{
	int		line;
	int		ret;

	line = 0;
	ret = -1;
	while ((line < s_p4->nb_line) && (ret == -1))
	{
		if (!(s_p4->board[line * col + col]))
		{
			ret = line;
			s_p4->board[line * s_p4->nb_col + col] = player;
		}
		++line;
	}
	return (ret);
}

static int	read_user_move(t_p4 *s_p4)
{
	int		ret;
	char		*input;
	int		col;

	ret = -1;
	s_p4->user_move = -1;
	while (ret == -1)
	{
		write(1, "What's your next move ? ", 24);
		get_next_line(0, &input);
		if ((ft_isnbr(input)) && ((col = ft_atoi(input)) > 0)
			&& (col <= s_p4->nb_col))
		{
			s_p4->user_move = col - 1;
			ret = put_piece(s_p4, col - 1, PLAYER);
			write(1, "\n", 1);
		}
	}
	return (ret);
}

int			start_p4_game(t_p4 *s_p4)
{
	int		ret;

	ret = 0;
	print_board(s_p4);
	read_user_move(s_p4);
	print_board(s_p4);
	return (ret);
}
