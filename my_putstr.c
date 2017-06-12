/*
** my_putstr.c for my_putstr in /home/benjamin.g/delivery/CPool_Day04
** 
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
** 
** Started on  Thu Oct  6 15:28:00 2016 Benjamin GAYMAY
** Last update Fri Nov 18 11:06:13 2016 Benjamin GAYMAY
*/

#include <stdlib.h>
#include "./include/my.h"

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  if (str == 0)
    str ="(null)";
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}

int	my_putstr_arg(va_list ap)
{
  my_putstr(va_arg(ap, char *));
  return (0);
}

void	my_putstr_oct(char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    str = "(null)";
  while (str[i] != '\0')
    {
      if ((str[i] < ' ') || (str[i] >= 127))
	{
	  my_putchar('\\');
	  my_oct(str[i]);
	}
      else
	my_putchar(str[i]);
      i++;
    }
}

int	my_putstr_oct_arg(va_list ap)
{
  my_putstr_oct(va_arg(ap, char *));
  return (0);
}
