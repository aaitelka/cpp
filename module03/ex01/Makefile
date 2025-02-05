# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: molex <molex@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/28 18:59:26 by aaitelka          #+#    #+#              #
#    Updated: 2025/01/09 17:49:51 by molex            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC		:= c++
NAME	:= scavtrap
HEADS	:= $(shell find . -name "*.hpp")
SRCS	:= $(shell find . -name "*.cpp")
OBJS	:= $(SRCS:.cpp=.o)
CFLAGS	:= -Wall -Werror -Wextra -std=c++98

all		: $(NAME)

$(NAME)	: $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o		: %.cpp $(HEADS)
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	$(RM) $(OBJS)

fclean	: clean
	$(RM) $(NAME)

re		: fclean all

.PHONY	: clean
