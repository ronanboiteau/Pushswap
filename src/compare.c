#include <stdbool.h>
#include "my.h"
#include "my_macro.h"
#include "list.h"

int	_nbr_is_greater(char *nbr_1, char *nbr_2, int is_neg)
{
  if (nbr_1[0] != '+' && nbr_2[0] == '+')
    return (_nbr_is_greater(nbr_1, nbr_2 + 1, false));
  else if (nbr_1[0] == '+' && nbr_2[0] != '+')
    return (_nbr_is_greater(nbr_1 + 1, nbr_2, false));
  else if (nbr_1[0] == '+' && nbr_2[0] == '+')
    return (_nbr_is_greater(nbr_1 + 1, nbr_2 + 1, false));
  else if (nbr_1[0] != '-' && nbr_2[0] == '-')
    return (true);
  else if (nbr_1[0] == '-' && nbr_2[0] != '-')
    return (false);
  else if (nbr_1[0] == '-' && nbr_2[0] == '-')
    return (!_nbr_is_greater(nbr_1 + 1, nbr_2 + 1, true));
  else if (my_strlen(nbr_1) > my_strlen(nbr_2))
    return (true);
  else if (my_strlen(nbr_1) == my_strlen(nbr_2) &&
	   (my_strcmp(nbr_1, nbr_2)) > 0 && is_neg == false)
    return (true);
  else if (my_strlen(nbr_1) == my_strlen(nbr_2) &&
	   (my_strcmp(nbr_1, nbr_2)) >= 0 && is_neg == true)
    return (true);
  return (false);
}

int		_is_sorted(t_node *list)
{
  t_node	*tmp;

  tmp = list;
  if (_nbr_is_greater(tmp->nbr, (tmp->next)->nbr, false) == true)
    return (false);
  tmp = tmp->next;
  while (tmp->next != list)
    {
      if (_nbr_is_greater(tmp->nbr, (tmp->next)->nbr, false) == true)
	return (false);
      tmp = tmp->next;
    }
  return (true);
}
