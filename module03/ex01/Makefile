# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/28 18:59:26 by aaitelka          #+#    #+#              #
#    Updated: 2025/02/06 23:26:49 by aaitelka         ###   ########.fr        #
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
