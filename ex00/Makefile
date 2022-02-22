# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/22 20:03:09 by spoliart          #+#    #+#              #
#    Updated: 2022/02/22 20:03:13 by spoliart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	prog

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g

SRCS	=	main.cpp
OBJS	=	$(SRCS:.cpp=.o)

all:	$(NAME)

%.o: %.cpp
		$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
		$(CC) $(CFLAGS) $^ -o $@

clean:
		rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)

re:		fclean all
