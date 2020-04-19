/*
** server.h for zappy in /home/chanut_g/rendu/PSU_2013_zappy/includes/server
** 
** Made by Guillaume
** Login   <chanut_g@epitech.net>
** 
** Started on  Mon May 12 15:30:19 2014 Guillaume
** Last update Mon May 12 15:31:02 2014 Guillaume
*/

#ifndef			SERVER_H_
# define		SERVER_H_

# include		"messages.h"

/* 
** Pour rappel :
** -p numero de port
** -x largeur du Monde
** -y hauteur du Monde
** -n nom_de_equipe_1 nom_de_equipe_2 ...
** -c nombre de clients par équipe autorisés au commencement du jeu
** -t delai temporel d’execution des actions.
*/

# define		DEF_PORT		4242
# define		DEF_XWORLD		20
# define		DEF_YWORLD		20
# define		DEF_TEAMNAME		Team_
# define		DEF_CBT			10
# define		DEF_DELAY		100

typedef struct		s_info
{
  unsigned int		portNb;
  unsigned int		Xworld;
  unsigned int		Yworld;
  char			**teamNames;
  unsigned int		clientByTeam;
  unsigned int		delay;
}			t_info;

typedef struct		s_serveur
{
  t_info		*info;
}			t_serv;

int			init_param(t_serv*, int, char **);
int			server(t_serv*);

int			send_data(char*, size_t, int);
char			*receve_data(size_t, int);

#endif
