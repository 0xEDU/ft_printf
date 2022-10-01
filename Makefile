NAME = libftprintf.a

CCFLAGS = -Wall -Wextra -Werror

PATH_INCL = incl
PATH_SRCS = srcs
PATH_OBJS = .
LIB_DIR = libput
LIB = $(LIB_DIR)/libput.a

SRCS = $(addprefix $(PATH_SRCS)/, ft_printf.c \
	   ft_printf_utils.c)

OBJS = $(SRCS:$(PATH_SRCS)/%.c=$(PATH_OBJS)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	make -C $(LIB_DIR)
	mv $(LIB) $(NAME)
	ar rcs $(NAME) $(OBJS)

$(OBJS): 
	$(CC) $(CCFLAGS) -I $(PATH_INCL) -c $(SRCS)

clean:
	/bin/rm -rf $(OBJS)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
