NAME = libftprintf.a

CCFLAGS = -Wall -Wextra -Werror

PATH_INCL = incl
PATH_SRCS = srcs
PATH_OBJS = .
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

SRCS = $(addprefix $(PATH_SRCS)/, ft_printf.c \
	   ft_printf_utils.c)

OBJS = $(SRCS:$(PATH_SRCS)/%.c=$(PATH_OBJS)/%.o)

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	mv $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(CCFLAGS) -I $(PATH_INCL) -c $(SRCS)

$(LIBFT):
	make -C $(LIBFT_DIR)

clean:
	/bin/rm -rf $(OBJS)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all
