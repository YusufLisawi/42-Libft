SRCS	= $(wildcard ft_*.c)

SRCS_BONUS = $(wildcard BONUS/ft_*.c)

OBJS	= $(SRCS:.c=.o)
BOBJS	= $(SRCS_BONUS:.c=.o)

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

bonus: $(NAME) $(BOBJS)
	ar rcs $(NAME) $(BOBJS)

clean:
			$(RM) $(OBJS) $(BOBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
