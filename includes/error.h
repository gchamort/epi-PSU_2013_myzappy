/*
** error.h for zappy in /home/chanut_g/rendu/PSU_2013_zappy/includes
** 
** Made by Guillaume
** Login   <chanut_g@epitech.net>
** 
** Started on  Mon May 12 15:44:37 2014 Guillaume
** Last update Mon May 12 15:46:00 2014 Guillaume
*/

#ifndef		ERROR_H_
# define	ERROR_H_

# define	ERROR		"Error:"
# define	ERR_MALLOC	"malloc() failed\n"
# define	ERR_READ	"read() failed\n"
# define	ERR_WRITE	"write() failed\n"

int		reterror(int, char *);
void		*retnullerror(char *);

#endif
