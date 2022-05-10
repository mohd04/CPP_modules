NAME = fragtrap

CPP = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SOURCE = main.cpp	ClapTrap.cpp	FragTrap.cpp	ScavTrap.cpp

OBJ = $(SOURCE:%.cpp=%.o)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
