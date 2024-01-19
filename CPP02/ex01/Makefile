# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malancar <malancar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 17:31:42 by malancar          #+#    #+#              #
#    Updated: 2024/01/19 17:33:01 by malancar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

FLAGS = -Wall -Werror -Wextra -g -std=c++98

NAME = fixed

SOURCES = Fixed.cpp	\
		  main.cpp

HEADER = Fixed.hpp

OBJECTS =	$(SOURCES:.cpp=.o)
OBJS = $(addprefix Objects/, $(OBJECTS))

DEPENDENCIES = $(SOURCES:.cpp=.d)
DEPS = $(addprefix Objects/, $(DEPENDENCIES))

$(NAME) : Objects $(OBJS)
		 $(CC) $(FLAGS) -o $(NAME) $(OBJS)

Objects/%.o :	%.cpp
		        $(CC) $(FLAGS) -MMD -o $@ -c $<

-include $(DEPS)

Objects:
			mkdir -p Objects

clean:
	@$(RM) $(OBJS) $(DEPS)

fclean: clean
	@$(RM) $(NAME) $(DEPS) rm -rf ./Objects

re:	fclean all

.PHONY: all clean fclean re