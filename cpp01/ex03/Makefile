# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 10:59:32 by slampine          #+#    #+#              #
#    Updated: 2023/10/06 14:15:54 by slampine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Violence

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ = $(SRC:.cpp=.o)
HEADER = Weapon.hpp HumanA.hpp HumanB.hpp
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