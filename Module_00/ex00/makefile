#    Colors
GREY = \e[90m
RED = \e[91m
GREEN = \e[92m
YELLOW = \e[93m
BLUE = \e[34m
PURPLE = \e[95m
CYAN = \e[96m
END = \e[39m

#    Showing command
DISP = FALSE

ifeq ($(DISP),TRUE)
    HIDE =
else
    HIDE = @
endif

#    Includes
INC = 

#    Folders
SRCS_PATH = .

#    Files
FILES = megaphone.cpp

#    Compilation
NAME = megaphone

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

SRCS = $(addprefix $(SRCS_PATH)/,	$(FILES))

OBJS_PATH = 

OBJS = $(patsubst $(SRCS_PATH)%.c,	$(OBJS_PATH)%.o,	$(SRCS))

#    Rules
all: $(NAME)

$(NAME): $(INC)
	@ echo "\n         ***Make $(NAME) ***\n"
	@ $(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@ echo "\n        ---$(NAME) created ---\n$"


#$(OBJS_PATH):
#	$(HIDE) mkdir -p $(OBJS_PATH)

#$(OBJS_PATH)%.o: $(SRCS_PATH)%.c $(INC)/$(NAME).h Makefile
#	$(HIDE) $(CC) $(CFLAGS) -I $(INC) -c $< -o $@
#	@ echo "$(GREEN)[ OK ]$(END) $(CYAN)${<:.s=.o}$(END)"

clean:
	@ $(RM) $(OBJS_PATH)
	@ make clean -C $(LIBFT_DIR)
	@ echo "\n        *** Clean objects ***\n"

fclean: clean
	@ $(RM) $(NAME)
	@ make fclean -C $(LIBFT_DIR)
	@ echo "\n        *** Remove $(NAME) ***\n"

re: fclean all

.PHONY: all clean fclean re