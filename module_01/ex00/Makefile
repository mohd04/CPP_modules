NAME = zombieeeee

GPP = g++

SOURCE = main.cpp	newZombie.cpp	randomChump.cpp \
		Zombie.cpp

OBJ = $(SOURCE:%.cpp=%.o)

$(NAME): $(OBJ)
	$(GPP) $(CFLAGS) -std=c++98 $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
