/*
** rules.c for push_swap in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Thu Nov 19 11:51:21 2015 Ronan Boiteau
** Last update Sun Nov 22 23:11:11 2015 Ronan Boiteau
*/

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
  if (*first_pass == FALSE && verbose == FALSE)
    my_putchar(' ');
  else if (*first_pass == FALSE && verbose == TRUE)
    my_putchar('\n');
  else
    *first_pass = FALSE;
  my_putstr(to_print);
  if (verbose == TRUE)
    _print_lists(list, FALSE);
  return (FALSE);
}

t_node			*_rotate_left(t_node *list_start,
				      char *to_print,
				      int *first_pass,
				      int verbose)
{
  if (*first_pass == FALSE && verbose == FALSE)
    my_putchar(' ');
  else if (*first_pass == FALSE && verbose == TRUE)
    my_putchar('\n');
  else
    *first_pass = FALSE;
  my_putstr(to_print);
  if (verbose == TRUE)
    _print_lists(list_start->next, FALSE);
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
  if (*first_pass == FALSE && verbose == FALSE)
    my_putchar(' ');
  else if (*first_pass == FALSE && verbose == TRUE)
    my_putchar('\n');
  else
    *first_pass = FALSE;
  my_putstr(to_print);
  if (verbose == TRUE)
    _print_lists(tmp, FALSE);
  return (tmp);
}
