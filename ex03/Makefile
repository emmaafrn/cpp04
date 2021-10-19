NAME = Interface

SRCS = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

OBJS = ${SRCS:.cpp=.o}

INC = AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp

CXXC  = clang++

RM  = rm -f

INC_CMP = $(addprefix -I, $(INC))

CXXFLAGS = -Wall -Wextra -Werror

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXXC) $(CXXFLAGS) $(INC_CMP) $(OBJS) -o $(NAME)

$(OBJS):		$(INC)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:			 fclean all

.PHONY: all clean fclean re
