/*
** tools.c for zappy in /home/chanut_g/rendu/PSU_2013_zappy/srcs
** 
** Made by Guillaume
** Login   <chanut_g@epitech.net>
** 
** Started on  Mon May 12 15:31:46 2014 Guillaume
** Last update Mon May 12 15:39:08 2014 Guillaume
*/

#include "includes.h"

int		reterror(int ret, char *str)
{
  if (str == NULL)
    write(STDERR_FILENO, "Unknow error\n", 13);
  else
    write(STDERR_FILENO, str, strlen(str));
  return (ret);
}

void		*retnullerror(char *str)
{
  if (str == NULL)
    write(STDERR_FILENO, "Unknow error\n", 13);
  else
    write(STDERR_FILENO, str, strlen(str));
  return (NULL);
}
