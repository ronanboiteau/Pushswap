#include <stdbool.h>
#include <stdlib.h>
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

  first_pass = true;
  while (_is_sorted(list_a) == false)
    {
      tmp_a = list_a;
      if (tmp_a->next == tmp_a)
	{
	  if (verbose == true && tmp_a->nbr)
	    return (_print_lists(tmp_a, true));
	}
      if (_nbr_is_greater(tmp_a->nbr, (tmp_a->next)->nbr, false) == true)
	_swap(tmp_a, "sa", &first_pass, verbose);
      tmp_a = _rotate_left(tmp_a, "ra", &first_pass, verbose);
      while (tmp_a->next != list_a && _is_sorted(list_a) == false)
  	{
  	  if (_nbr_is_greater(tmp_a->nbr, (tmp_a->next)->nbr, false) == true)
	    _swap(tmp_a, "sa", &first_pass, verbose);
	  tmp_a = _rotate_left(tmp_a, "ra", &first_pass, verbose);
  	}
    }
  while (first_pass == false && _is_sorted(tmp_a) == false)
    tmp_a = _rotate_right(tmp_a, "rra", &first_pass, verbose);
  if (first_pass == false)
    my_printf("\n");
}

static int		_init_list(t_node *list_start,
				   char **argv,
				   int argc,
				   int verbose)
{
  int			idx;

  if (verbose == false)
    idx = 2;
  else
    idx = 3;
  while (idx < argc)
    {
      if (_put_in_list(list_start, argv[idx]) == EXIT_FAILURE)
	{
	  my_dprintf(2, "malloc() failed: out of memory!\n");
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

  verbose = false;
  if (argc < 2)
    {
      my_dprintf(2, "Usage: ./pushswap [nbr_1] [nbr_2] [nbr_3] [...]\n");
      return (EXIT_FAILURE);
    }
  if (match(argv[1], "-v"))
    verbose = true;
  if ((list_a_start = malloc(sizeof(t_node))) == NULL)
    return (EXIT_FAILURE);
  if (verbose == false)
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
