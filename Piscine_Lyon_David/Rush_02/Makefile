# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cefuente <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/30 08:31:26 by cefuente          #+#    #+#              #
#    Updated: 2023/09/30 08:35:34 by cefuente         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror -I include

SRC	=	

OBJ	=	$(SRC:.c=.o)

NAME	=	rush-02

all:	$(NAME)

$(NAME):	$(OBJ)
	cc -o $(NAME) $(CFLAGS) $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: clean fclean re all
