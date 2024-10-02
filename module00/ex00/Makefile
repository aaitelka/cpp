CC				:= c++
NAME			:= megaphone
SRCS			:= megaphone.cpp
OBJS 			:= megaphone.o
CFLAGS			:= -Wall -Werror -Wextra -std=c++98

all:			$(NAME)

$(NAME) : $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

$(OBJS)%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	@$(RM) $(OBJS)

fclean : clean
	@$(RM) $(NAME)

re : fclean all

.PHONY : clean
