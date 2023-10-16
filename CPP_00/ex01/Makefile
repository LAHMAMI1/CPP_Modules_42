# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/15 23:40:19 by olahmami          #+#    #+#              #
#    Updated: 2023/10/16 04:12:27 by olahmami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CCPP = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
NAME = phonebook
SRCS = phonebook.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CCPP) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
