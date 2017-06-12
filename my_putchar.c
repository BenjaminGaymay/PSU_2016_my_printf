/*
** my_putchar.c for my_putchar in /home/benjamin.g/save_lib
** 
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
** 
** Started on  Thu Oct 13 08:26:21 2016 Benjamin GAYMAY
** Last update Fri Nov 18 11:27:45 2016 Benjamin GAYMAY
*/

#include <unistd.h>
#include "./include/my.h"

void	my_putchar(char c)
{
  if (c != 0)
    write(1, &c, 1);
}

int	my_putchar_arg(va_list ap)
{
  my_putchar(va_arg(ap, int));
  return (0);
}

int	my_aff_modulo_arg(va_list ap)
{
  my_putchar('%');
  return (0);
}

int	my_aff_atsign_arg(va_list ap)
{
  my_putstr("%@");
  return (0);
}
