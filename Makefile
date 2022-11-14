# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkasbaou <hkasbaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/23 14:49:28 by hkasbaou          #+#    #+#              #
#    Updated: 2022/10/23 16:31:01 by hkasbaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: clean all re fclean
CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
FILE = ft_printf.c ft_putchr.c ft_puthexa.c ft_putnbr.c

OBJ = $(FILE:.c=.o) 
all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ) $(BOBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all