# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/23 21:04:25 by ikanatov          #+#    #+#              #
#    Updated: 2024/03/24 18:15:32 by zmazitov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#our source code will be compiled as follows :

CC = cc
CFLAGS = -Wall -Wextra -Werror
SOURCES = match.c breakdown_nbr.c load_dict.c count_lines.c free_dict.c get_magnitude.c main.c
OBJECTS = ${SOURCES:.c=.o}
DEPS = main.h
RM = rm -f
NAME = rush-02

all:
	$(CC) $(CFLAGS) -o $(NAME) $(SOURCES)

fclean:
	${RM} ${NAME} ${OBJECTS}
