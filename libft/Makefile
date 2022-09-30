# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: coder <coder@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/27 15:51:38 by coder             #+#    #+#              #
#    Updated: 2022/09/30 18:11:12 by coder            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

PATH_SRCS = ./
PATH_INCL = ../incl/
PATH_OBJS = ./

CCFLAGS = -Wall -Wextra -Werror

SRCS = $(addprefix $(PATH_SRCS), ft_atoi.c \
	   ft_bzero.c       \
	   ft_calloc.c      \
	   ft_isalnum.c     \
	   ft_isalpha.c     \
	   ft_isascii.c     \
	   ft_isdigit.c     \
	   ft_isprint.c     \
	   ft_itoa.c        \
	   ft_memchr.c      \
	   ft_memcmp.c      \
	   ft_memcpy.c      \
	   ft_memmove.c     \
	   ft_memset.c      \
	   ft_putchar.c     \
	   ft_putchar_fd.c  \
	   ft_putendl_fd.c  \
	   ft_putnbr_fd.c   \
	   ft_putnbr_hex.c  \
	   ft_putstr.c      \
	   ft_putstr_fd.c   \
	   ft_split.c       \
	   ft_strchr.c      \
	   ft_strdup.c      \
	   ft_striteri.c    \
	   ft_strjoin.c     \
	   ft_strlcat.c     \
	   ft_strlcpy.c     \
	   ft_strlen.c      \
	   ft_strmapi.c     \
	   ft_strncmp.c     \
	   ft_strnstr.c     \
	   ft_strrchr.c     \
	   ft_strtrim.c     \
	   ft_substr.c      \
	   ft_tolower.c     \
	   ft_toupper.c)

OBJS = $(SRCS:.c=.o)

B_SRCS = ft_lstnew.c       \
		 ft_lstadd_back.c  \
		 ft_lstadd_front.c \
		 ft_lstsize.c      \
		 ft_lstlast.c      \
		 ft_lstdelone.c    \
		 ft_lstclear.c

B_OBJS = ft_lstnew.o       \
		 ft_lstadd_back.o  \
		 ft_lstadd_front.o \
		 ft_lstsize.o      \
		 ft_lstlast.o      \
		 ft_lstdelone.o    \
		 ft_lstclear.o

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	@cc $(CCFLAGS) -I $(PATH_INCL) -c $(SRCS)

bonus: $(NAME) $(B_OBJS)

$(B_OBJS): $(B_SRC)
	cc $(CCFLAGS) -c $(B_SRCS) -I $(PATH_SRCS)
	ar rcs $(NAME) $(B_OBJS)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

re_bonus: fclean bonus
