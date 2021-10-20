NAME = Brain

SRCS = main.cpp Animal.cpp Brain.cpp Cat.cpp Dog.cpp

OBJS = ${SRCS:.cpp=.o}

INC = Animal.hpp Brain.hpp Cat.hpp Dog.hpp

CXX  = clang++

RM  = rm -f

INC_CMP = $(addprefix -I, $(INC))

CXXFLAGS = -Wall -Wextra -Werror

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) $(INC_CMP) $(OBJS) -o $(NAME)

$(OBJS):		$(INC)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:			 fclean all

.PHONY: all clean fclean re