NAME = zombieees

GPP = g++
GPPFLAGS = -Wall -Werror -Wextra -std=c++98

SOURCES = main.cpp	Zombie.cpp	zombieHorde.cpp
INCL = Zombie.hpp

OBJ = $(SOURCES:%.cpp=%.o)

$(NAME): $(OBJ)
	$(GPP) $(GPPFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
