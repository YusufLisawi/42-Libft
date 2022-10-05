SRCS	= $(wildcard ft_*.c)

OBJS	= $(SRCS:.c=.o)

NAME	= libft.a

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

%.o : %.c
			$(CC) $(CFLAGS) -c $< -o $(<:c=o)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)
			ranlib $(NAME)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
