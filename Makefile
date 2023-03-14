NAME		= libftprintf.a

SRCS		= ft_itoa.c \ft_puthex.c \ft_uitoa.c \ft_printf.c \ft_putptr.c \utils.c \ft_putnum.c

OBJS		= $(SRCS:%.c=%.o)

CC			= gcc

AR			= ar rc

FLAGS		= -Wall -Werror -Wextra

$(NAME):
	$(CC) $(FLAGS) -c $(SRCS) -I ./
	$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS) $(NAME)

re: fclean all
