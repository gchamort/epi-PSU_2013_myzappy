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

#include <ctype.h>

int			init_param(t_serv* s, int ac, char** av)
{
  //  int			opt;

  s->info->portNb = DEF_PORT;
  s->info->Xworld = DEF_XWORLD;
  s->info->Yworld = DEF_YWORLD;
  if ((s->info->teamNames = malloc((sizeof(char*) * 3))) == NULL)
    return (reterror(EXIT_FAILURE, ERR_MALLOC));
  if ((s->info->teamNames[0] = malloc((sizeof(char) * 7))) == NULL)
    return (reterror(EXIT_FAILURE, ERR_MALLOC));
  strcat(s->info->teamNames[0], "Team_0\0");
  if ((s->info->teamNames[1] = malloc((sizeof(char) * 7))) == NULL)
    return (reterror(EXIT_FAILURE, ERR_MALLOC));
  strcat(s->info->teamNames[1], "Team_1\0");
  s->info->clientByTeam = DEF_CBT;
  s->info->delay = DEF_DELAY;
  (void)ac; (void)av;
  /* while ((opt = getopt(ac, av, "p:x:y:n:c:t:")) != -1) */
  /*   { */
  /*     if (opt == 'p') */
  /* 	s->info->portNb = atoi(optarg); */
  /*   } */
  printf("Port %i\n", s->info->portNb);
  return (EXIT_SUCCESS);
}
