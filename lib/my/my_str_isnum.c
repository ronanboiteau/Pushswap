/*
** my_str_isnum.c for my_str_isnum in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct 18 18:01:08 2015 Ronan Boiteau
** Last update Sun Nov  8 02:09:56 2015 Ronan Boiteau
*/

#include "my_macro.h"

int		my_str_isnum(char *str)
{
  unsigned int	index;

  index = 0;
  while (str[index] != '\0')
    {
      if (!(str[index] >= '0' && str[index] <= '9'))
	return (FALSE);
      index += 1;
    }
  return (TRUE);
}