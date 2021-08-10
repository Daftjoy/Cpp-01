# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antmarti <antmarti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/10 17:37:37 by antmarti          #+#    #+#              #
#    Updated: 2021/08/10 17:37:38 by antmarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp 

OBJS =	$(SRCS:.cpp=.o)

FLAGS =	-Werror -Wextra -Wall

NAME =	Brain

RM = rm -f

$(NAME):
		clang++ $(FLAGS) $(SRCS) -o $(NAME)
		clang++ -c $(FLAGS) $(SRCS) 

all:	$(NAME)

clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re