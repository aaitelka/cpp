# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaitelka <aaitelka@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/05 08:02:41 by aaitelka          #+#    #+#              #
#    Updated: 2024/12/06 16:59:03 by aaitelka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		:= c++
NAME	:= zombie
HEADS	:= $(shell find . -name "*.hpp")
SRCS	:= $(shell find . -name "*.cpp")
OBJS	:= $(SRCS:.cpp=.o)
CFLAGS	:= -Wall -Werror -Wextra -std=c++98

all		: $(NAME)

$(NAME)	: $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o		: %.cpp $(HEADS)
	$(CC) $(CFLAGS) -c $< -o $@

clean 	:
	@$(RM) $(OBJS)

fclean	: clean
	@$(RM) $(NAME)

re		: fclean all

.PHONY	: clean
