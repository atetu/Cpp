NAME =			whatever

SRCS =			whatever.cpp 

OBJS =			$(SRCS:.cpp=.o)

CPP =			clang++

CFLAGS =		-Wall -Werror -Wextra	


%.o:			%.c
			$(CPP) $(CFLAGS) $<
#%.o:.%.c 		$(CPP) $(CFLAGS) -o $@ -c $<

all:			$(NAME)

$(NAME):		$(OBJS)
			$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)

clean:			
			$(RM) $(OBJS)

fclean: 		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: 		fclean clean all re
