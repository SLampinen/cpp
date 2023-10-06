# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 10:59:32 by slampine          #+#    #+#              #
#    Updated: 2023/10/06 11:01:40 by slampine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Horde

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

SRC = main.cpp Zombie.cpp zombieHorde.cpp
OBJ = $(SRC:.cpp=.o)
HEADER = Zombie.hpp
.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(FLAGS) -o $(NAME) $(SRC) 

clean:
	$(RM) $(OBJ);
fclean:
	$(RM) $(NAME)
	$(RM) $(OBJ);

re: clean all