# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slampine <slampine@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 13:22:45 by slampine          #+#    #+#              #
#    Updated: 2024/01/24 10:51:52 by slampine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex03

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

SRC = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp Intern.cpp
OBJ = $(SRC:.cpp=.o)
HEADER = Bureaucrat.hpp AForm.hpp
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