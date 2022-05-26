<<<<<<< HEAD
NAME = Bureaucrat

CPP = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SOURCE = main.cpp	Bureaucrat.cpp Form.cpp	PresidentialPardonForm.cpp	RobotomyRequestForm.cpp	ShrubberyCreationForm.cpp

OBJ = $(SOURCE:%.cpp=%.o)

$(NAME): $(OBJ)
	$(CPP) -g $(CPPFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
=======
NAME = Bureaucrat

CPP = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SOURCE = main.cpp	Form.cpp Bureaucrat.cpp	PresidentialPardonForm.cpp RobotomyRequestForm.cpp		\
		ShrubberyCreationForm.cpp

OBJ = $(SOURCE:%.cpp=%.o)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
>>>>>>> 1d651095d8e6e3dbc7c78b5cf50e676f1ee97d01
