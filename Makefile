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

$(NAME): $(OBJS) $(LIB)
	mv $(LIB) $(NAME)
	ar rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(CCFLAGS) -I $(PATH_INCL) -c $(SRCS)

$(LIB):
	make -C $(LIB_DIR)

clean:
	/bin/rm -rf $(OBJS)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all
