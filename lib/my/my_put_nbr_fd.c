/*
** my_put_nbr_fd.c for my_put_nbr_fd in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct 11 00:50:12 2015 Ronan Boiteau
** Last update Sun Nov  8 01:46:13 2015 Ronan Boiteau
*/

#include "my.h"

void		my_put_nbr_fd(int fd, int nbr)
{
  if (nbr == -2147483648)
    {
      my_putstr_fd(fd, "-2147483648");
      return ;
    }
  if (nbr < 0)
    {
      my_putchar_fd(fd, '-');
      nbr *= -1;
    }
  if (nbr >= 10)
    {
      my_put_nbr_fd(fd, nbr / 10);
      my_putchar_fd(fd, nbr % 10 + '0');
    }
  else
    my_putchar_fd(fd, nbr + '0');
  return ;
}
