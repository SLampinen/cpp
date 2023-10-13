# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/10 10:45:24 by slampine          #+#    #+#              #
#    Updated: 2023/10/12 13:20:42 by slampine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mySed

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

SRC = main.cpp mySed.cpp
OBJ = $(SRC:.cpp=.o)
HEADER = mySed.hpp
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