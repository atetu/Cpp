# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/28 16:52:00 by user42            #+#    #+#              #
#    Updated: 2020/09/28 18:00:19 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =			serialize

SRCS =			Serialize.cpp \
				main.cpp			

OBJS =			$(SRCS:.cpp=.o)

CPP =			clang++

CFLAGS =		-Wall -Werror -Wextra -std=c++98


%.o:			%.c
				$(CPP) $(CFLAGS) $<
#%.o:.%.c 		$(CPP) $(CFLAGS) -o $@ -c $<

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CPP) $(CFLAGS) $(OBJS) -I. -o $(NAME)

clean:			
				$(RM) $(OBJS)

fclean: 		clean
				$(RM) $(NAME)

re:				fclean all

.PHONY: 		fclean clean all re
