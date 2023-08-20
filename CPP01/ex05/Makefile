# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joao-per <joao-per@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/20 14:57:57 by joao-per          #+#    #+#              #
#    Updated: 2023/08/20 14:57:58 by joao-per         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Harl
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
SRC		= main.cpp Harl.cpp
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
	@ $(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@printf "$(GREEN)- Harl Compiled!$(DEFAULT)"

clean:
	@$(RM) $(OBJS)
	@echo "$(RED)- OBJS Removed.$(DEFAULT)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)- Harl Removed.$(DEFAULT)"

re: clean all

.PHONY: all clean re