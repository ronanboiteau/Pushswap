/*
** my_putchar_fd.c for my_putchar_fd in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct 11 00:48:29 2015 Ronan Boiteau
** Last update Sun Nov  8 01:42:33 2015 Ronan Boiteau
*/

#include "my.h"

void		my_putchar_fd(int fd, char letter)
{
  write(fd, &letter, 1);
  return ;
}
