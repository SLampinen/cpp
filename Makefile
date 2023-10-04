# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 11:42:08 by slampine          #+#    #+#              #
#    Updated: 2023/09/22 15:35:11 by slampine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

SRC = Main.cpp Contact.cpp Phonebook.cpp
OBJ = Main.o Contact.o Phonebook.o
HEADER = Contact.hpp Phonebook.hpp
.PHONY: all clean re

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(FLAGS) -o $(NAME) $(SRC) 

clean:
	$(RM) $(NAME) $(OBJ)

flcean:
	$(RM) $(NAME) $(OBJ)

re: clean all