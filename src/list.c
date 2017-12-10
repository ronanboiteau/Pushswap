/*
** list.c for push_swap in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Tue Nov  3 00:28:19 2015 Ronan Boiteau
** Last update Sun Nov 22 23:04:05 2015 Ronan Boiteau
*/

#include "my.h"
#include "my_macro.h"
#include "list.h"

void		_print_lists(t_node *list_start, int one_elem)
{
  t_node	*tmp;

  if (one_elem == FALSE)
    my_putchar('\n');
  my_putstr("l_a: ");
  tmp = list_start;
  my_putstr(tmp->nbr);
  my_putchar(' ');
  tmp = tmp->next;
  while (tmp != list_start)
    {
      my_putstr(tmp->nbr);
      my_putchar(' ');
      tmp = tmp->next;
    }
  my_putstr("\nl_b: EMPTY");
  return ;
}

int		_put_in_list(t_node *list_ptr, char *nbr)
{
  t_node	*list_start;

  list_start = list_ptr;
  while (list_ptr->next != list_start)
    list_ptr = list_ptr->next;
  list_ptr->next = malloc(sizeof(t_node));
  if (list_ptr == NULL)
    return (EXIT_FAILURE);
  list_ptr = list_ptr->next;
  list_ptr->nbr = nbr;
  list_ptr->next = list_start;
  return (EXIT_SUCCESS);
}
