# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joao-per <joao-per@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/18 20:27:04 by joao-per          #+#    #+#              #
#    Updated: 2023/09/26 12:31:07 by joao-per         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= PmergeMe
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
SRC		= main.cpp PmergeMe.cpp
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
	@printf "$(GREEN)- PmergeMe Compiled!$(DEFAULT)"

clean:
	@$(RM) $(OBJS)
	@echo "$(RED)- OBJS Removed.$(DEFAULT)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)- PmergeMe Removed.$(DEFAULT)"

test100:			$(NAME)	
					$(eval ARG = $(shell shuf -i 0-5000 -n 100))
					@./PmergeMe $(ARG) | grep "After"

test500:			$(NAME)	
					$(eval ARG = $(shell shuf -i 0-5000 -n 500))
					@./PmergeMe $(ARG) | grep "After"

test3000:			$(NAME)	
					$(eval ARG = $(shell shuf -i 0-10000 -n 3000))
					@./PmergeMe $(ARG) | grep "After"

re: clean all

.PHONY: all clean fclean re