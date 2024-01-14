# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olahmami <olahmami@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/13 15:30:26 by olahmami          #+#    #+#              #
#    Updated: 2024/01/13 15:31:01 by olahmami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CPPFLAGS = -std=c++98 -Wall -Werror -Wextra -fsanitize=address
NAME = RPN
SRCS = main.cpp RPN.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re