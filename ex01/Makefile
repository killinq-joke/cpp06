# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mout <mout@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/15 17:01:33 by ztouzri           #+#    #+#              #
#    Updated: 2021/11/19 15:55:09 by mout             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC   = clang++
CFLAGS = -Wall -Wextra -Werror
SRCS = main.cpp
OBJS = $(SRCS:cpp=o)
NAME = exec

.cpp.o:
	$(CC) $(CFLAGS) $(SRCS) -c

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(EXEC)

re: fclean all
