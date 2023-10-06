# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 10:59:32 by slampine          #+#    #+#              #
#    Updated: 2023/10/06 12:01:36 by slampine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Brain

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

SRC = main.cpp 
OBJ = main.o
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