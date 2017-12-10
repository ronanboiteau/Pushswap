/*
** compare.c for push_swap in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Nov 22 23:17:38 2015 Ronan Boiteau
** Last update Sun Nov 22 23:20:00 2015 Ronan Boiteau
*/

#include "my.h"
#include "my_macro.h"
#include "list.h"

int			_nbr_is_greater(char *nbr_1, char *nbr_2, int is_neg)
{
  if (nbr_1[0] != '+' && nbr_2[0] == '+')
    return (_nbr_is_greater(nbr_1, nbr_2 + 1, FALSE));
  else if (nbr_1[0] == '+' && nbr_2[0] != '+')
    return (_nbr_is_greater(nbr_1 + 1, nbr_2, FALSE));
  else if (nbr_1[0] == '+' && nbr_2[0] == '+')
    return (_nbr_is_greater(nbr_1 + 1, nbr_2 + 1, FALSE));
  else if (nbr_1[0] != '-' && nbr_2[0] == '-')
    return (TRUE);
  else if (nbr_1[0] == '-' && nbr_2[0] != '-')
    return (FALSE);
  else if (nbr_1[0] == '-' && nbr_2[0] == '-')
    return (!_nbr_is_greater(nbr_1 + 1, nbr_2 + 1, TRUE));
  else if (my_strlen(nbr_1) > my_strlen(nbr_2))
    return (TRUE);
  else if (my_strlen(nbr_1) == my_strlen(nbr_2) &&
	   (my_strcmp(nbr_1, nbr_2)) > 0 && is_neg == FALSE)
    return (TRUE);
  else if (my_strlen(nbr_1) == my_strlen(nbr_2) &&
	   (my_strcmp(nbr_1, nbr_2)) >= 0 && is_neg == TRUE)
    return (TRUE);
  return (FALSE);
}

int			_is_sorted(t_node *list)
{
  t_node		*tmp;

  tmp = list;
  if (_nbr_is_greater(tmp->nbr, (tmp->next)->nbr, FALSE) == TRUE)
    return (FALSE);
  tmp = tmp->next;
  while (tmp->next != list)
    {
      if (_nbr_is_greater(tmp->nbr, (tmp->next)->nbr, FALSE) == TRUE)
	return (FALSE);
      tmp = tmp->next;
    }
  return (TRUE);
}
