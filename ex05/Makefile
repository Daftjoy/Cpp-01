# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antmarti <antmarti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/10 17:39:15 by antmarti          #+#    #+#              #
#    Updated: 2021/08/10 17:39:16 by antmarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp Karen.cpp

OBJS =	$(SRCS:.cpp=.o)

FLAGS =	-Werror -Wextra -Wall

NAME =	Karen

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