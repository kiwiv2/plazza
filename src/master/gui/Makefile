##
## EPITECH PROJECT, 2018
## plazza cli
## File description:
## Makefile
##

CXX	=	g++ -g3

DEBUG	=	-g3

RM	=	rm -rf

INC		=	-I./../../../include -I./../../tool -I./../ -lpthread -I ../../slave

CXXFLAGS	=	-Wall -Wextra -Werror $(INC) -lsfml-graphics -lsfml-window -lsfml-system -lSDL2 -lSDL2_ttf

NAME		=	plazza

SRCS	=	main.cpp			\
		Master.cpp			\
		Gui.cpp				\
		../SlaveManagergui.cpp		\
		../Server.cpp			\
		Parser.cpp			\
		../../slave/Slave.cpp		\
		../../slave/Parse_file.cpp	\
		../IntSocket.cpp		\
		../ThreadPool.cpp		\
		../Client.cpp			\
		../../slave/Timer.cpp

OBJS	=	$(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

debug: $(OBJS)
	$(CXX) $(DEBUG) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all debug clean fclean re
