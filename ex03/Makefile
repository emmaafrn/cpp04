NAME = Interface

SRCS = main.cpp 

OBJS = ${SRCS:.cpp=.o}

INC = 

CC  = clang++

RM  = rm -f

INC_CMP = $(addprefix -I, $(INC))

CFLAGS = -Wall -Wextra -Werror -fsanitize=address

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) $(INC_CMP) $(OBJS) -o $(NAME)

$(OBJS):		$(INC)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:			 fclean all

.PHONY: all clean fclean re