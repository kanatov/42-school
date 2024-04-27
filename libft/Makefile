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

SRCS =	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c
SRCS_O = ${SRCS:.c=.o}

SRCS_BONUS =	ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c
SRCS_BONUS_O = ${SRCS_BONUS:.c=.o}
RM = rm -f
NAME = libft.a

all: $(NAME)

$(NAME): $(SRCS_O)
	ar -rcs $@ $?

bonus:  $(SRCS_O) $(SRCS_BONUS_O)
	ar -rcs $(NAME) $?

%.o: %.c
	cc -c -Wall -Wextra -Werror $?

clean:
	${RM} ${SRCS_O} ${SRCS_BONUS_O}

fclean: clean
	${RM} ${NAME}

re: fclean all
