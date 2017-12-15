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
