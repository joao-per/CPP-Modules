# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joao-per <joao-per@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/16 21:13:48 by joao-per          #+#    #+#              #
#    Updated: 2023/08/16 21:13:49 by joao-per         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Zombie
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
SRC		= main.cpp Zombie.cpp zombieHorde.cpp
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

$(NAME): $(OBJS)
	@echo "$(CURSIVE)$(YELLOW)- Compiling $(NAME)... $(DEFAULT)"
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@printf "$(GREEN)- Zombie Compiled!$(DEFAULT)"

clean:
	@$(RM) $(OBJS)
	@echo "$(RED)- OBJS Removed.$(DEFAULT)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)- Zombie Removed.$(DEFAULT)"

re: clean all

.PHONY: all clean re