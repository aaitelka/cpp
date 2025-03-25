# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/09 16:06:05 by aaitelka          #+#    #+#              #
#    Updated: 2025/03/25 18:44:16 by aaitelka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		:= c++
NAME	:= identifier
HEADS	:= Base.hpp A.hpp B.hpp C.hpp Identifier.hpp
SRCS	:= main.cpp Base.cpp A.cpp B.cpp C.cpp Identifier.cpp
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
