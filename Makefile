SRCS			= ft_printf.c

OBJS			= $(SRCS:.c=.o)

CC				= @cc
RM				= @rm -f
CFLAGS			= -Wall -Wextra -Werror -ggdb -pedantic -I.

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				@ar rcs $(NAME) $(OBJS)

$(OBJS): %.o: %.c
				$(CC) $(CFLAGS) -c $< -o $@

clean:
				@$(RM) $(OBJS)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean $(NAME)


.PHONY:			all clean fclean re