# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/14 17:27:32 by user42            #+#    #+#              #
#    Updated: 2020/09/16 15:53:50 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =			cato9tails

SRCS =			main.cpp\
				Cat.cpp			

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
				rm $(OBJS)

fclean: 		clean
				rm $(NAME)

re:				fclean all

.PHONY: 		fclean clean all re
