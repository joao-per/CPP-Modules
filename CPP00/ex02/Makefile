NAME	= Account
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
SRC		= tests.cpp Account.cpp

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

$(NAME): 
	@echo "$(CURSIVE)$(YELLOW)- Compiling $(NAME)... $(DEFAULT)"
	@ $(CC) $(FLAGS) $(SRC) -o $(NAME)
	@printf "$(GREEN)- Account Compiled!$(DEFAULT)"

clean:
	@$(RM) $(NAME)
	@echo "$(RED)- Account Removed.$(DEFAULT)"

fclean:
	@$(RM) $(NAME)
	@echo "$(RED)- Account Removed.$(DEFAULT)"

re: clean all

.PHONY: all clean re