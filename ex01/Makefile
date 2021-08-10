# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antmarti <antmarti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/10 17:36:50 by antmarti          #+#    #+#              #
#    Updated: 2021/08/10 17:36:51 by antmarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp Zombie.cpp ZombieHorde.cpp 

OBJS =	$(SRCS:.cpp=.o)

FLAGS =	-Werror -Wextra -Wall

NAME =	ZombieHorde

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