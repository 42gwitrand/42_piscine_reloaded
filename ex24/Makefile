NAME	= libft.a

CC	= gcc

RAN	= ranlib

AR	= ar rc

RM	= rm -f

SRCS	= ./srcs/ft_putchar.c	\
	  ./srcs/ft_putstr.c	\
	  ./srcs/ft_strcmp.c	\
	  ./srcs/ft_strlen.c	\
	  ./srcs/ft_swap.c 

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I includes
CFLAGS += -W -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	 $(AR) $(NAME) $(OBJS)
	 $(RAN) $(NAME)
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
