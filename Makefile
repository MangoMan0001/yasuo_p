NAME = libftprintf.a
SRCS = ft_printf.c
OBJS = $(SRCS:.c=.o)
CC = cc
CFLAG = -Wall -Wextra -Werror
AR = ar
ARFLAG = rcs
LIBFT_DIR = libft
LIBFT_ARCHIVE = $(LIBFT_DIR)/libft.a

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT_ARCHIVE)
		cp $(LIBFT_ARCHIVE) $(NAME)
		$(AR) $(ARFLAG) $(NAME) $(OBJS)

$(LIBFT_ARCHIVE):
		make -C $(LIBFT_DIR)

%.o: %.c
		$(CC) $(CFLAG) -c $< -o $@

clean:
		make -C $(LIBFT_DIR) clean
		rm -f $(OBJS) $(BONUS_OBJS)

fclean:	clean
		make -C $(LIBFT_DIR) fclean
		rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
