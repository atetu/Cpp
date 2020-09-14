# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/14 16:28:23 by user42            #+#    #+#              #
#    Updated: 2020/09/14 17:29:58 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =			replace

SRCS =			main.cpp			

OBJS =			$(SRCS:.cpp=.o)

CPP =			clang++

CFLAGS =		-Wall -Werror -Wextra	


%.o:			%.c
				$(CPP) $(CFLAGS) $<
#%.o:.%.c 		$(CPP) $(CFLAGS) -o $@ -c $<

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)
	
test1:			$(NAME)
				rm FILENAME.replace
				./replace test_text1 amour XXX

test2:			$(NAME)
				rm FILENAME.replace
				./replace test_text2 sed XXX
clean:			
				rm $(OBJS)

fclean: 		clean
				rm $(NAME)
				rm FILENAME.replace


re:				fclean all

.PHONY: 		fclean clean all re
