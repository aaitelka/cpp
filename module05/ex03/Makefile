# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/09 16:06:05 by aaitelka          #+#    #+#              #
#    Updated: 2025/03/19 17:40:29 by aaitelka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		:= c++
NAME	:= intern
HEADS	:= Bureaucrat.hpp AForm.hpp \
			ShrubberyCreationForm.hpp \
			RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp
SRCS	:= main.cpp Bureaucrat.cpp \
			AForm.cpp ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

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
