NAME = phonebook

CC = c++

SOURCE = main.cpp	contact.cpp	phonebook.cpp
INCLUDE = contact.hpp	phonebook.hpp

OBJ = $(SOURCE:%.cpp=%.o)

CFLAGS = -Wall -Werror -Wextra

$(NAME):$(OBJ)
	$(CC) -g $(CFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all