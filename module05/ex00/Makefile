# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/09 16:06:05 by aaitelka          #+#    #+#              #
#    Updated: 2025/03/13 22:00:13 by aaitelka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		:= c++
NAME	:= bureaucrat
HEADS	:= Bureaucrat.hpp
SRCS	:= main.cpp Bureaucrat.cpp
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
