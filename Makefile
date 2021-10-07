# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/07 18:41:15 by edpaulin          #+#    #+#              #
#    Updated: 2021/10/07 18:41:15 by edpaulin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libftprintf.a

SRC				=	ft_printf.c \
					ft_types.c \
					libft.c
OBJ				=	$(SRC:.c=.o)

HEADER_DIR		=	includes

CC				=	clang
CFLAGS			=	-Wall -Wextra -Werror

.DEFAULT_GOAL	=	all

all:		$(NAME)

%.o:		%.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER_DIR)

$(NAME):	$(OBJ)
	ar cr $(NAME) $(OBJ)

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean:		clean
	rm -f $(NAME)

re:			fclean all

rebonus:	fclean bonus