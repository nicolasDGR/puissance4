#include <p4.h>

static int		init_p4_env(char *nb_lines, char *nb_columns)
{
   t_p4			*s_p4;
   int			ret;

   if ((s_p4 = ft_memalloc(sizeof(*s_p4))))
   {
	  s_p4->nb_line = ft_atoi(nb_lines);
	  s_p4->nb_col = ft_atoi(nb_columns);
	  if ((s_p4->nb_line >=	6) && (s_p4->nb_col >= 7))
	  {
	  if ((s_p4->board = (char *)ft_memalloc(s_p4->nb_col * s_p4->nb_line)))
	  {
		 bzero(s_p4->board, s_p4->nb_col * s_p4->nb_line);
		 ret = start_p4_game(s_p4);
	  }
	  else
		 ret = -1;
	  }
	  else
		 ft_putstr("There must be at least 6 lines and 7 columns.\n");
   }
   else
	  ret = -1;
   free(s_p4);
   return (ret);
}

static void		p4_usage(void)
{
   ft_putstr("usage: ./p4 number_of_lines number_of_colums\n\tnumber_of_lines \
		 must be an integer >= 6 and number of colums an integer >= 7.\n");
}

int				main(int argc, char **argv)
{
   int			ret;

   ret = 0;
   if (argc == 3)
   {
	  if (ft_isnbr(argv[1]))
	  {
		 if (ft_isnbr(argv[2]))
		 {
			ret = init_p4_env(argv[1], argv[2]);
		 }
		 else
			ft_putstr("Please provide a valid number of colums\n");
	  }
	  else
		 ft_putstr("Please provide a valid number of lines\n");
   }
   else
	  p4_usage();
   return (ret);
}

