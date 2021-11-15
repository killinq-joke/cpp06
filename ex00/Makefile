# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/15 17:01:33 by ztouzri           #+#    #+#              #
#    Updated: 2021/11/15 17:04:04 by ztouzri          ###   ########.fr        #
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