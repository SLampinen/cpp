# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 13:22:45 by slampine          #+#    #+#              #
#    Updated: 2023/10/26 14:12:01 by slampine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

SRC = main.cpp Bureaucrat.cpp
OBJ = $(SRC:.cpp=.o)
HEADER = Bureaucrat.hpp
.PHONY: all clean fclean flcean re

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(FLAGS) -o $(NAME) $(SRC) 

clean:
	$(RM) $(OBJ)
fclean:
	$(RM) $(NAME)
	$(RM) $(OBJ)
flcean:
	$(RM) $(NAME)
	$(RM) $(OBJ)
re: clean all