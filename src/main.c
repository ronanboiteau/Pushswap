/*
** main.c for push_swap in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Mon Nov  2 20:09:30 2015 Ronan Boiteau
** Last update Sun Nov 22 23:33:35 2015 Ronan Boiteau
*/

#include "my.h"
#include "my_macro.h"
#include "list.h"
#include "rules.h"
#include "compare.h"

static void		_sorter(t_node *list_a,
				t_node *tmp_a,
				int verbose)
{
  int			first_pass;

  first_pass = TRUE;
  while (_is_sorted(list_a) == FALSE)
    {
      tmp_a = list_a;
      if (tmp_a->next == tmp_a)
	{
	  if (verbose == TRUE && tmp_a->nbr)
	    return (_print_lists(tmp_a, TRUE));
	}
      if (_nbr_is_greater(tmp_a->nbr, (tmp_a->next)->nbr, FALSE) == TRUE)
	_swap(tmp_a, "sa", &first_pass, verbose);
      tmp_a = _rotate_left(tmp_a, "ra", &first_pass, verbose);
      while (tmp_a->next != list_a && _is_sorted(list_a) == FALSE)
  	{
  	  if (_nbr_is_greater(tmp_a->nbr, (tmp_a->next)->nbr, FALSE) == TRUE)
	    _swap(tmp_a, "sa", &first_pass, verbose);
	  tmp_a = _rotate_left(tmp_a, "ra", &first_pass, verbose);
  	}
    }
  while (first_pass == FALSE && _is_sorted(tmp_a) == FALSE)
    tmp_a = _rotate_right(tmp_a, "rra", &first_pass, verbose);
  if (first_pass == FALSE)
    my_putchar('\n');
}

static int		_init_list(t_node *list_start,
				   char **argv,
				   int argc,
				   int verbose)
{
  int			idx;

  if (verbose == FALSE)
    idx = 2;
  else
    idx = 3;
  while (idx < argc)
    {
      if (_put_in_list(list_start, argv[idx]) == EXIT_FAILURE)
	{
	  my_putstr_fd(2, "malloc() failed: out of memory!\n");
	  return (EXIT_FAILURE);
	}
      idx += 1;
    }
  return (EXIT_SUCCESS);
}

int			main(int argc, char **argv)
{
  t_node		*list_a_start;
  t_node		*list_a_end;
  int			verbose;

  verbose = FALSE;
  if (argc < 2)
    {
      my_putstr_fd(2, "Usage: ./pushswap [nbr_1] [nbr_2] [nbr_3] [...]\n");
      return (EXIT_FAILURE);
    }
  if (match(argv[1], "-v"))
    verbose = TRUE;
  list_a_start = malloc(sizeof(t_node));
  if (verbose == FALSE)
    list_a_start->nbr = argv[1];
  else
    list_a_start->nbr = argv[2];
  list_a_end = list_a_start;
  list_a_end->next = list_a_start;
  if (_init_list(list_a_start, argv, argc, verbose) == EXIT_FAILURE)
    return (EXIT_FAILURE);
  _sorter(list_a_start, list_a_start, verbose);
  free(list_a_start);
  return (EXIT_SUCCESS);
}
