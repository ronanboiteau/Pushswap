/*
** my_putstr_fd.c for my_putstr_fd in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct 11 00:52:56 2015 Ronan Boiteau
** Last update Sun Nov  8 02:26:51 2015 Ronan Boiteau
*/

#include "my.h"

void		my_putstr_fd(int fd, char *str)
{
  write(fd, str, my_strlen(str));
  return ;
}
