/*
** rules.h for push_swap in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Thu Nov 19 11:53:18 2015 Ronan Boiteau
** Last update Sun Nov 22 22:57:27 2015 Ronan Boiteau
*/

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
