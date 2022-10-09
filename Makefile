SRCS		= $(wildcard ft_*.c)

SRCS_BONUS 	= $(wildcard ft_*_bonus.c)

OBJS		= $(SRCS:.c=.o)
OBJS_BONUS	= $(SRCS_BONUS:.c=.o)

NAME		= libft.a

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

RM			= rm -f

%.o : %.c
			$(CC) $(CFLAGS) -c $< -o $(<:c=o)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)
			ranlib $(NAME)

all:		$(NAME)

bonus: 		$(NAME) $(OBJS_BONUS)
			ar rcs $(NAME) $(OBJS_BONUS)

clean:
			$(RM) $(OBJS) $(OBJS_BONUS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
