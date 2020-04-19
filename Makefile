##
## Makefile for zappy in /home/chanut_g/rendu/PSU_2013_zappy
## 
## Made by Guillaume
## Login   <chanut_g@epitech.net>
## 
## Started on  Mon May 12 14:56:14 2014 Guillaume
## Last update Mon May 12 16:53:39 2014 Guillaume
##

## shared ##
R_PATH	= srcs/

SRCS	= \
	$(R_PATH)tools.c		\
	$(R_PATH)call_select.c		\

HEAD	= -I includes/

## client ##
CLIENT	= client

C_PATH	= $(R_PATH)client/

C_SRCS	= $(SRCS)			\
	$(C_PATH)main.c			\
	$(C_PATH)client.c		\

C_OBJS	= $(C_SRCS:.c=.o)

C_HEAD	= -I includes/

## server ##
SERVER	= serveur

S_PATH	= $(R_PATH)server/

S_SRCS	= $(SRCS)			\
	$(S_PATH)main.c			\
	$(S_PATH)init_param.c		\
	$(S_PATH)server.c		\
	$(S_PATH)send_receve.c		\

S_OBJS	= $(S_SRCS:.c=.o)

S_HEAD	= -I includes/

## compile ##
CC	= gcc -o

CFLAGS	= -W -Wall -Werror -Wextra $(HEAD) $(C_HEAD) $(S_HEAD)

RM	= rm -f

## rules ##
all:	$(CLIENT) $(SERVER)

$(CLIENT):	$(C_OBJS)
	$(CC) $(CLIENT) $(C_OBJS)
	@echo "\033[32m\t\t\t\t{Client Compiled.}\033[039m"

$(SERVER):	$(S_OBJS)
	$(CC) $(SERVER) $(S_OBJS)
	@echo "\033[32m\t\t\t\t{Server Compiled.}\033[039m"

clean:
	$(RM) $(C_OBJS)
	$(RM) $(S_OBJS)
	@echo "\033[33m\t\t\t\t{Project Cleaned.}\033[039m"

fclean:	clean
	$(RM) $(CLIENT)
	$(RM) $(SERVER)
	@echo "\033[31m\t\t\t\t{Project Full Cleaned.}\033[039m"

re:	fclean all

rec:	re
	$(RM) $(C_OBJS)
	$(RM) $(S_OBJS)
	@echo "\033[33m\t\t\t\t{Project Cleaned.}\033[039m"
