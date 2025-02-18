# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygurma <ygurma@student.s19.be>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/18 19:29:11 by ygurma            #+#    #+#              #
#    Updated: 2025/02/18 19:29:13 by ygurma           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# Compiler and Flags
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Target and Source Files
NAME = polymorphism
SRCS = main.cpp \
       Animal.cpp \
       Dog.cpp \
       Cat.cpp \
       Brain.cpp \

OBJS = $(SRCS:.cpp=.o)

# Rules
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

# Additional utilities
run: $(NAME)
	./$(NAME)

.PHONY: all clean fclean re run
