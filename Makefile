
NAME = libftprintf.a

SRCS = ft_printf.c \
		ft_putstr.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_hex.c \
		ft_putptr.c

BONUS_SRCS = 

CC = cc
CFLAGS = -Wall -Wextra -Werror 
OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

bonus: $(OBJS_BONUS)
	ar -rcs $(NAME) $(OBJS_BONUS)

clean: 
	rm -rf $(OBJS) $(OBJS_BONUS)
fclean: clean
	rm -rf $(NAME)
re: fclean $(NAME)

.PHONY: all clean fclean re bonus