NAME = weapon

CPP = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SOURCE = main.cpp	HumanA.cpp	HumanB.cpp	Weapon.cpp

OBJ = $(SOURCE:%.cpp=%.o)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
