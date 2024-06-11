# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malancar <malancar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 17:31:42 by malancar          #+#    #+#              #
#    Updated: 2024/06/11 19:18:10 by malancar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

FLAGS = -Wall -Werror -Wextra -g -std=c++98

NAME = Form

SOURCES = Bureaucrat.cpp			\
		  Form.cpp					\
		  ShrubberyCreationForm.cpp	\
		  RobotomyRequestForm.cpp	\
		  Intern.cpp				\
		  main.cpp

OBJECTS =	$(SOURCES:.cpp=.o)
OBJS = $(addprefix Objects/, $(OBJECTS))

DEPENDENCIES = $(SOURCES:.cpp=.d)
DEPS = $(addprefix Objects/, $(DEPENDENCIES))

RM = rm -rf

all : $(NAME)

$(NAME) : Objects $(OBJS)
		 $(CXX) $(FLAGS) -o $(NAME) $(OBJS)

Objects/%.o :	Sources/%.cpp
		        $(CXX) $(FLAGS) -MMD -I ./Includes -o $@ -c $<

Objects:
			mkdir -p Objects

clean:
	$(RM) $(OBJS) $(DEPS) ./Objects

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
