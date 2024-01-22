# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malancar <malancar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 17:31:42 by malancar          #+#    #+#              #
#    Updated: 2024/01/22 19:07:07 by malancar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

FLAGS = -Wall -Werror -Wextra -g -std=c++98

NAME = zombie

SOURCES = Zombie.cpp		\
		  zombieHorde.cpp	\
		  main.cpp

HEADER = Zombie.hpp

OBJECTS =	$(SOURCES:.cpp=.o)
OBJS = $(addprefix Objects/, $(OBJECTS))

DEPENDENCIES = $(SOURCES:.cpp=.d)
DEPS = $(addprefix Objects/, $(DEPENDENCIES))

RM = rm -rf ./Objects

$(NAME) : Objects $(OBJS)
		 $(CC) $(FLAGS) -o $(NAME) $(OBJS)

all:	$(NAME)

Objects/%.o :	%.cpp
		        $(CC) $(FLAGS) -MMD -o $@ -c $<

-include $(DEPS)

Objects:
			mkdir -p Objects

clean:
	@$(RM) $(OBJS) $(DEPS)

fclean: clean
	@$(RM) $(NAME) $(DEPS)

re:	fclean all

.PHONY: all clean fclean re