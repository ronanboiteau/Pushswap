#include <stdbool.h>
#include <stdlib.h>
#include "my.h"
#include "my_macro.h"
#include "list.h"

void		_print_lists(t_node *list_start, int one_elem)
{
  t_node	*tmp;

  if (one_elem == false)
    my_printf("\n");
  my_printf("l_a: ");
  tmp = list_start;
  my_printf("%s ", tmp->nbr);
  tmp = tmp->next;
  while (tmp != list_start)
    {
      my_printf("%s ", tmp->nbr);
      tmp = tmp->next;
    }
  my_printf("\nl_b: EMPTY");
  return ;
}

int		_put_in_list(t_node *list_ptr, char *nbr)
{
  t_node	*list_start;

  list_start = list_ptr;
  while (list_ptr->next != list_start)
    list_ptr = list_ptr->next;
  if ((list_ptr->next = malloc(sizeof(t_node))) == NULL)
    return (EXIT_FAILURE);
  list_ptr = list_ptr->next;
  list_ptr->nbr = nbr;
  list_ptr->next = list_start;
  return (EXIT_SUCCESS);
}
