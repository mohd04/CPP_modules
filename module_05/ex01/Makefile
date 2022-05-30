# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpatel <mpatel@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/30 09:46:55 by mpatel            #+#    #+#              #
#    Updated: 2022/05/30 09:46:55 by mpatel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat

CPP = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SOURCE = main.cpp	Form.cpp Bureaucrat.cpp

OBJ = $(SOURCE:%.cpp=%.o)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
