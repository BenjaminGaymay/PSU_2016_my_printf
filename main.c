/*
** main.c for main in /home/benjamin.g/delivery/PSU_2016_my_printf
** 
** Made by Benjamin GAYMAY
** Login   <benjamin.g@epitech.net>
** 
** Started on  Thu Nov 17 10:05:46 2016 Benjamin GAYMAY
** Last update Sat Nov 19 09:42:45 2016 Benjamin GAYMAY
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "./include/my.h"

int	main(void)
{
  int	a;
  char	toto[] = "TOTO";

  a = 1;
  toto[1] = 127;
  my_printf("Test 1 : %c // ", 'a');
  printf("%c\n", 'a');
  my_printf("Test 2 : %s // ", "abc");
  printf("%s\n", "abc");
  my_printf("Test 3 : %i // ", -5);
  printf("%i\n", -5);
  my_printf("Test 4 : %d // ", 15678);
  printf("%d\n", 15678);
  my_printf("Test 5 : %x // ", 123456);
  printf("%x\n", 123456);
  my_printf("Test 6 : %X // ", 123456);
  printf("%X\n", 123456);
  my_printf("Test 7 : %o // ", 42);
  printf("%o\n", 42);
  my_printf("Test 8 : %u // ", 17u);
  printf("%u\n", 17);
  my_printf("Test 9 : %u // ", -42);
  printf("%u\n", -42);
  my_printf("Test 10 : %p // ", &a);
  printf("%p\n", &a);
  my_printf("Test 11 : %S\n", toto);
  my_printf("Test 12 : %b\n", 42);
  my_printf("Test 13 : %% // ", 42);
  printf("%%\n", 42);
  my_printf("Test 14 : %%kd // ", 42);
  printf("%%kd\n", 42);
  my_printf("Test 15 : %+d// ", 42);
  printf("%+d\n", 42);
  my_printf("Test 16 : %+d // ", -42);
  printf("%+d\n", -42);
  my_printf("Test 17 : %+kd // ", 42);
  printf("%+kd\n", 42);
  my_printf("Test 18 : %      d // ", 42);
  printf("%        d\n", 42);
  my_printf("Test 19 : %#x // ", 42);
  printf("%#x\n", 42);
  my_printf("Test 20 : ");
  my_printf(NULL);
  my_printf(" //");
  printf(NULL);
  printf(" \n");
  my_printf("Test 21 : %c // ", NULL);
  printf("%c\n", NULL);
  my_printf("Test 22 : %s // ", NULL);
  printf("%s \n", NULL);
  my_printf("Test 23 : %d // ", NULL);
  printf("%d\n", NULL);
  my_printf("Test 24 : %u // ", NULL);
  printf("%u\n", NULL);
  my_printf("Test 25 : %x // ", NULL);
  printf("%x\n", NULL);
  my_printf("Test 26 : %X // ", NULL);
  printf("%X\n", NULL);
  my_printf("Test 27 : %o // ", NULL);
  printf("%o\n", NULL);
  my_printf("Test 28 : %p // ", NULL);
  printf("%p\n", NULL);
  my_printf("Test 29 : %S // ", NULL);
  printf("%s \n", NULL);
  my_printf("Test 30 : %b // ", NULL);
  printf("%o\n", NULL);
  my_printf("Test 31 : %% // ", NULL);
  printf("%%\n", NULL);
  my_printf("Test 32 : %@ // ");
  printf("%@ \n");
  my_printf("Test 33 : %#b\n", 123);
  my_printf("Test 34 : ab %@d10%d%d %s // ", 10, 5, "abc");
  printf("ab %@d10%d%d %s \n",  10, 5, "abc");
  my_printf("Test 35 : %x // ", -42);
  printf("%x\n", -42);
  my_printf("Test 36 : %X // ", -42);
  printf("%X\n", -42);
  my_printf("Test 37 : %o // ", -42);
  printf("%o\n", -42);
  my_printf("Test 38 : %b\n", -42);
  my_printf("Test 39 : %x // ", 2147483647);
  printf("%x\n", 2147483647);
  my_printf("Test 40 : %+p // ", &a);
  printf("%+p\n", &a);
}
