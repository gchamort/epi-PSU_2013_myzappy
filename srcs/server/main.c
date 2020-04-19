/*
** main.c for zappy in /home/chanut_g/rendu/PSU_2013_zappy/srcs/server
** 
** Made by Guillaume
** Login   <chanut_g@epitech.net>
** 
** Started on  Mon May 12 15:40:21 2014 Guillaume
** Last update Mon May 12 15:42:03 2014 Guillaume
*/

#include "includes.h"
#include "server.h"
#include "stdio.h"

int			main(int ac, char **av)
{
  t_serv		serv;

  printf("%s", DEF_PARAM);
  init_param(&serv, ac, av);
  return (server(&serv));
}
