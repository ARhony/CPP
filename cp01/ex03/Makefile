SRC = 	main.cpp \
		HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp

CC = c++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -g

NAME = violence

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
	leaks --atExit -- ./$(NAME)

.PHONY: all clean fclean re
