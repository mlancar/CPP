# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malancar <malancar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 17:31:42 by malancar          #+#    #+#              #
#    Updated: 2024/01/25 16:20:55 by malancar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

FLAGS = -Wall -Werror -Wextra -Wshadow -Wno-shadow -g -std=c++98

NAME = diamondtrap

SOURCES = ClapTrap.cpp		\
		  ScavTrap.cpp		\
		  FragTrap.cpp		\
		  DiamondTrap.cpp	\
		  main.cpp

OBJECTS =	$(SOURCES:.cpp=.o)
OBJS = $(addprefix Objects/, $(OBJECTS))

DEPENDENCIES = $(SOURCES:.cpp=.d)
DEPS = $(addprefix Objects/, $(DEPENDENCIES))

$(NAME) : Objects $(OBJS)
		 $(CXX) $(FLAGS) -o $(NAME) $(OBJS)

all:	$(NAME)

Objects/%.o :	%.cpp
		        $(CXX) $(FLAGS) -MMD -o $@ -c $<

-include $(DEPS)

Objects:
			mkdir -p Objects

clean:
	@$(RM) $(OBJS) $(DEPS)

fclean: clean
	@$(RM) $(NAME) $(DEPS) rm -rf ./Objects

re:	fclean all

.PHONY: all clean fclean re