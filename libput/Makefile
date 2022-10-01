# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: coder <coder@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/27 15:51:38 by coder             #+#    #+#              #
#    Updated: 2022/10/01 02:38:41 by coder            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libput.a

PATH_SRCS = ./
PATH_INCL = ../incl/
PATH_OBJS = ./

CCFLAGS = -Wall -Wextra -Werror

SRCS = $(addprefix $(PATH_SRCS), ft_putchar.c \
	   ft_putnbr.c      \
	   ft_putnbr_hex.c  \
	   ft_putstr.c      \
	   ft_strlen.c)

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	@cc $(CCFLAGS) -I $(PATH_INCL) -c $(SRCS)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
