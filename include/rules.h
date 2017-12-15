#ifndef RULES_H_
# define RULES_H_

#include "list.h"

int		_swap(t_node *list,
		      char *to_print,
		      int *first_pass,
		      int verbose);
t_node		*_rotate_left(t_node *list_start,
			      char *to_print,
			      int *first_pass,
			      int verbose);
t_node		*_rotate_right(t_node *list_start,
			       char *to_print,
			       int *first_pass,
			       int verbose);

#endif /* !RULES_H_ */
