# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 01:17:37 by olahmami          #+#    #+#              #
#    Updated: 2023/10/19 01:23:36 by olahmami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
NAME = zombie
SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re