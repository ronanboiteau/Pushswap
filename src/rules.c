#include <stdbool.h>
#include "my.h"
#include "my_macro.h"
#include "list.h"

int			_swap(t_node *list,
			      char *to_print,
			      int *first_pass,
			      int verbose)
{
  char			*tmp;

  tmp = list->nbr;
  list->nbr = (list->next)->nbr;
  (list->next)->nbr = tmp;
  if (*first_pass == false && verbose == false)
    my_printf(" ");
  else if (*first_pass == false && verbose == true)
    my_printf("\n");
  else
    *first_pass = false;
  my_printf("%s", to_print);
  if (verbose == true)
    _print_lists(list, false);
  return (false);
}

t_node			*_rotate_left(t_node *list_start,
				      char *to_print,
				      int *first_pass,
				      int verbose)
{
  if (*first_pass == false && verbose == false)
    my_printf(" ");
  else if (*first_pass == false && verbose == true)
    my_printf("\n");
  else
    *first_pass = false;
  my_printf("%s", to_print);
  if (verbose == true)
    _print_lists(list_start->next, false);
  return (list_start->next);
}

t_node			*_rotate_right(t_node *list_start,
				       char *to_print,
				       int *first_pass,
				       int verbose)
{
  t_node		*tmp;

  tmp = list_start;
  while (tmp->next != list_start)
    tmp = tmp->next;
  if (*first_pass == false && verbose == false)
    my_printf(" ");
  else if (*first_pass == false && verbose == true)
    my_printf("\n");
  else
    *first_pass = false;
  my_printf("%s", to_print);
  if (verbose == true)
    _print_lists(tmp, false);
  return (tmp);
}
