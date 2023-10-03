SRC = 	main.cpp

CC = clang++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -g

NAME = sed_for_losers

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):
	$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

leaks:
	$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

.PHONY: all clean fclean re
