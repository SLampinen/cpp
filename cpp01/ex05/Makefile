# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/10 10:45:24 by slampine          #+#    #+#              #
#    Updated: 2023/10/13 09:16:26 by slampine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

SRC = main.cpp Harl.cpp
OBJ = $(SRC:.cpp=.o)
HEADER = Harl.hpp
.PHONY: all clean fclean flcean re

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(FLAGS) -o $(NAME) $(SRC) 

clean:
	$(RM) $(OBJ);
fclean:
	$(RM) $(NAME)
	$(RM) $(OBJ);
flcean:
	$(RM) $(NAME)
	$(RM) $(OBJ);
re: clean all