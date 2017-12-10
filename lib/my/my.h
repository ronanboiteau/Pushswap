/*
** my.h for libmy in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Thu Oct  8 10:33:26 2015 Ronan Boiteau
** Last update Sun Nov  8 02:26:29 2015 Ronan Boiteau
*/

#ifndef MY_H_
# define MY_H_

# include <unistd.h>
# include <stdlib.h>

int		match(char *str1, char *str2);
int		my_char_isalpha(char letter);
int		my_char_islower(char letter);
int		my_char_isnum(char letter);
int		my_char_isprintable(char letter);
int		my_char_isupper(char letter);
int		my_find_prime_sup(int nbr);
int		my_getnbr(char *str);
int		my_isneg(int nbr);
int		my_is_prime(int nbr);
int		my_max_int_tab(int *tab, unsigned int size);
int		my_min_int_tab(int *tab, unsigned int size);
int		my_power(int nbr, int power);
void		my_putchar(char letter);
void		my_putchar_fd(int fd, char letter);
int		my_putnbr_base(int nbr, char *base);
void		my_put_nbr(int nbr);
void		my_put_nbr_fd(int fd, int nbr);
void		my_putstr(char *str);
void		my_putstr_fd(int fd, char *str);
char		*my_revstr(char *str);
int		my_showstr(char *str);
void		my_sort_int_tab(int *tab, int size);
int		my_square_root(int nbr);
char		*my_strcapitalize(char *str);
char		*my_strcat(char *dest, char *src);
int		my_strcmp(char *str1, char *str2);
char		*my_strcpy(char *dest, char *src);
char		*my_strdup(char *src);
int		my_str_isalpha(char *str);
int		my_str_islower(char *str);
int		my_str_isnum(char *str);
int		my_str_isprintable(char *str);
int		my_str_isupper(char *str);
int		my_strlen(char *str);
char		*my_strlowcase(char *str);
char		*my_strncat(char *dest, char *src, unsigned int nbr);
int		my_strncmp(char *str1, char *str2, unsigned int nbr);
char		*my_strncpy(char *dest, char *src, unsigned int nbr);
char		*my_strstr(char *str, char *to_find);
char		*my_strupcase(char *str);
void		my_swap(int *ptr_a, int *ptr_b);
int		nmatch(char *str1, char *str2);

#endif /* !MY_H_ */