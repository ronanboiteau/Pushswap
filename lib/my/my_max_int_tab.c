/*
** my_max_int_tab.c for my_max_int_tab in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Oct 18 19:48:15 2015 Ronan Boiteau
** Last update Sun Nov  8 02:31:29 2015 Ronan Boiteau
*/

int		my_max_int_tab(int *tab, unsigned int size)
{
  unsigned int	index;
  int		greatest;

  index = 0;
  greatest = tab[index];
  while (index < size)
    {
      if (tab[index] > greatest)
	greatest = tab[index];
      index += 1;
    }
  return (greatest);
}
