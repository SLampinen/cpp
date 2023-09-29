# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 10:59:32 by slampine          #+#    #+#              #
#    Updated: 2023/09/20 11:08:53 by slampine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

.PHONY: all clean re

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) megaphone.cpp -o $(NAME)

clean:
	$(RM) $(NAME)

flcean:
	$(RM) $(NAME)

re: clean all