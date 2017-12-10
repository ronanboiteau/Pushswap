/*
** my_putnbr_base.c for my_putnbr_base in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Mon Oct 19 00:17:18 2015 Ronan Boiteau
** Last update Sun Nov  8 02:09:10 2015 Ronan Boiteau
*/

#include "my.h"

int		my_putnbr_base(int nbr, char *base)
{
  int		base_int;

  base_int = 0;
  while (base[base_int] != '\0')
    base_int += 1;
  if (base_int < 2)
    return (0);
  if (nbr == -2147483648)
    {
      my_putnbr_base(-2147483648 / base_int, base);
      my_putnbr_base(-2147483648 % base_int, base);
      return (nbr);
    }
  if (nbr < 0)
    {
      nbr *= -1;
      my_putchar('-');
    }
  if (nbr >= base_int)
    my_putnbr_base(nbr / base_int, base);
  my_putchar(base[nbr % base_int]);
  return (nbr);
}
