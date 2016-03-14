/*
** 108trigo.c for 108trigo in /home/VEYSSI_B/rendu/Maths/108trigo
**
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
**
** Started on  Mon Mar 14 14:58:48 2016 Baptiste veyssiere
** Last update Mon Mar 14 15:26:12 2016 Baptiste veyssiere
*/

#include "108trigo.h"

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = -1;
  while (s1[++i] != 0)
    if (s2[i] == 0 || s2[i] != s1[i])
      return (0);
  if (s2[i] != 0)
    return (0);
  return (1);
}

void	help_option()
{
  printf("USAGE\n\t   ./108trigo fun a0 a1 a2....\n\nDESCRIPTION\n\t   fun   function to be applied, among at least \"EXP\", \"COS\", \"SIN\", \"COSH\" and \"SINH\"\n\t   ai    coeficients of the matrix\n");
}

int	main(int ac, char **av)
{
  if (ac == 2 && my_strcmp(av[1], "-h"))
    {
      help_option();
      return (0);
    }
  return (0);
}
