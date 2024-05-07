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

NAME = libftprintf.a
NAME_MAIN = main
SRC_MAIN = main.c
SRC = ft_printf.c
SRC_DIR = src
INC_DIR = include
TEST_DIR = test
LIBFT_DIR = libft
SRC_O =  $(SRC_DIR)/${SRC:.c=.o}
RM = rm -rf
CC = cc
CC_FLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(SRC_O)
	make -C $(LIBFT_DIR) bonus
	ar -rcs $@ $(LIBFT_DIR)/libft.a $(SRC_O)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) -c $(CC_FLAGS) -I$(INC_DIR) -c $< -o $@

clean:
	$(RM) $(SRC_O) $(TEST_DIR)/$(NAME_MAIN)
	make -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all

main: $(NAME) $(TEST_DIR)/$(NAME_MAIN)

$(TEST_DIR)/$(NAME_MAIN):
	$(CC) $(TEST_DIR)/$(SRC_MAIN) -o $@ -I$(INC_DIR) libftprintf.a