CC = c++
FLAGS = -Wall -Wextra -Werror
NAME = megaphone
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

# Colors
GREEN = \033[0;32m
RED = \033[0;31m
NC = \033[0m # No Color

all: $(NAME)
	@echo "$(GREEN)Compilation finished$(NC)"

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)
	@echo "$(RED)Object files removed$(NC)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)Executable removed$(NC)"

re: fclean all
	@echo "$(GREEN)Recompiled$(NC)"

.PHONY: all clean fclean re
