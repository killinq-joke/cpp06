# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/15 17:01:33 by ztouzri           #+#    #+#              #
#    Updated: 2021/11/23 14:21:00 by ztouzri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC   = clang++
CFLAGS = -Wall -Wextra -Werror
SRCS = main.cpp
OBJS = $(SRCS:cpp=o)
NAME = exec
TEST = test

.cpp.o:
	$(CC) $(CFLAGS) $(SRCS) -c

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

test: all
	./$(NAME) 0 | diff - $(TEST)0.txt
	./$(NAME) 1 | diff - $(TEST)1.txt
	./$(NAME) -9435.32 | diff - $(TEST)2.txt
	./$(NAME) 42.42 | diff - $(TEST)3.txt
	./$(NAME) inf | diff - $(TEST)inf.txt
	./$(NAME) -inf | diff - $(TEST)-inf.txt
	./$(NAME) nan | diff - $(TEST)nan.txt
