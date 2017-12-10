/*
** list.h for push_swap in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Nov  8 18:48:40 2015 Ronan Boiteau
** Last update Sun Nov 22 23:04:14 2015 Ronan Boiteau
*/

#ifndef LIST_H_
# define LIST_H_

typedef struct	s_node
{
  char		*nbr;
  struct s_node	*next;
}		t_node;

void		_print_lists(t_node *list_start, int one_elem);
int		_put_in_list(t_node *head, char *nbr);

#endif /* !LIST_H_ */
