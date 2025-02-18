# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygurma <ygurma@student.s19.be>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/18 19:20:34 by ygurma            #+#    #+#              #
#    Updated: 2025/02/18 19:20:37 by ygurma           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98


NAME = polymorphism
SRCS = main.cpp \
       Animal.cpp \
       Dog.cpp \
       Cat.cpp \
       WrongAnimal.cpp \
       WrongCat.cpp

OBJS = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all


run: $(NAME)
	./$(NAME)

.PHONY: all clean fclean re run
