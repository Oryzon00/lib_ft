SRCS = fonctions/*.c

OBJS = $(SRCS:.c=.o)

BONUS = bonus/*.c

BONUS_OBJS = $(BONUS:.c=.o)

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME)

$(NAME): 	$(OBJS)
			ar rcs $(NAME) $(OBJS

clean:
			rm -f $(OBJS) $(BONUS_OBJS)

fclean:		clean
			rm -f $(NAME)

re: 		fclean $(NAME)

bonus:		$(OBJS) $(BONUS_OBJS)
			ar rcs $(NAME) $(OBJS) $(OBJS)

.PHONY:		all clean fclean re bonus
