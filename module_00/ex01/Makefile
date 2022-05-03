NAME = phonebook

GPP = c++

SOURCE = main.cpp	contact.cpp	phonebook.cpp
INCLUDE = contact.hpp	phonebook.hpp

OBJ = $(SOURCE:%.cpp=%.o)

%.o = %.cpp $(INCLUDE)
	$(GPP) $(CFLAGS) -c $< -o $@

$(NAME) = $(OBJ)
	$(GPP) $(CFLAGS) -std=c++98 $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
