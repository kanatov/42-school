# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikanatov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/08 17:44:09 by ikanatov          #+#    #+#              #
#    Updated: 2024/04/08 17:44:13 by ikanatov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = *.c
OBJECTS = ${SOURCES:.c=.o}
RM = rm -f
NAME = libft.a

all: $(NAME)

$(NAME):
	cc -c -Wall -Wextra -Werror $(SOURCES)
	ar -rcs $(NAME) $(OBJECTS)

clean:
	${RM} ${OBJECTS}

fclean: clean
	${RM} ${NAME}

re: fclean all
