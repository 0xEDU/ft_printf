NAME = libftprintf.a

CCFLAGS = -Wall -Wextra -Werror

PATH_INCL = incl
PATH_SRCS = srcs
PATH_OBJS = objs
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

SRCS = $(addprefix $(PATH_SRCS)/, ft_printf.c)

OBJS = $(SRCS:$(PATH_SRCS)/%.c=$(PATH_OBJS)/%.o)

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	ar rcs $(NAME) $(OBJS) $(LIBFT)

$(OBJS): $(SRCS)
	mkdir $(PATH_OBJS)
	$(CC) $(CCFLAGS) -I $(PATH_INCL) -c $(SRCS) -o $(OBJS)

$(LIBFT):
	make -C $(LIBFT_DIR)

clean:
	/bin/rm -rf $(PATH_OBJS)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all
