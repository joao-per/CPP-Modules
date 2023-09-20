# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joao-per <joao-per@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/18 20:27:04 by joao-per          #+#    #+#              #
#    Updated: 2023/09/18 20:27:12 by joao-per         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= AForms
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
SRC		= main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp
OBJS	= $(SRC:.cpp=.o)

# Colors

DEFAULT = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m
CURSIVE	= \e[33;3m


all: $(NAME)

%.o: %.cpp
	@echo "$(CURSIVE)$(YELLOW)- Compiling $<... $(DEFAULT)"
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@echo "$(MAGENTA)- Compiling $(NAME)... $(DEFAULT)"
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)
	@printf "$(GREEN)- AForms Compiled!$(DEFAULT)"

clean:
	@$(RM) $(OBJS)
	@echo "$(RED)- OBJS Removed.$(DEFAULT)"

fclean: clean
	@$(RM) $(NAME)
	@$(RM) *_shrubbery
	@echo "$(RED)- Shrubbery files Removed$(DEFAULT)"
	@echo "$(RED)- AForms Removed.$(DEFAULT)"

re: clean all

.PHONY: all clean re