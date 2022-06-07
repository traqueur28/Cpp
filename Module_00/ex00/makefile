YELLOW	= \033[38;5;184m
GREEN	= \033[38;5;46m
CYAN	= \033[0;49;96m

COMPILE	= [$(CYAN)Compilation$(NOC)]
INFO	= [$(YELLOW)INFO$(NOC)]
DONE	= [$(GREEN)DONE$(NOC)]
NOC		= \033[0m

NAME = megaphone
SRC = megaphone.cpp

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = src
INC = inc/
OBJ = obj
O = $(SRC:%.cpp=$(OBJ)/%.o)
D = $(SRC:%.cpp=$(OBJ)/%.d)

all: $(NAME)

$(NAME): $(O)
	@ $(CPPFLAGS) $^ -o $@
	@ echo "$(DONE) $@"

$(OBJ):
	@ mkdir $(OBJ)

-include $(D)

$(OBJ)/%.o: $(SRC)/%.cpp | $(OBJ)
	@ echo "$(COMPILE)$(NOC) $*.cpp"
	@ $(CPPFLAGS) -MMD -MP $(INC:%=-I %) -c $< -o $@

clean:
	@ echo "$(INFO) deleting $(OBJ)"
	@ rm -rf $(OBJ)

fclean: clean
	@ echo "$(INFO) deleting $(NAME)"
	@ rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
