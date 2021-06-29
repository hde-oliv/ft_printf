SRC		:=	ft_printf.c ft_char.c ft_flag.c ft_hex.c ft_int.c ft_tag.c

OBJS    :=	$(SRC:.c=.o)

NAME	:=	libftprintf.a
RLIB    :=	ranlib
CC		:=	clang
LIB		:=	ar rcs

CFLAGS	+=	-Wall -Wextra -Werror
LFLAGS	+=	-I.
TFLAGS	+=	-g -fsanitize=address
RM		:=	rm -rf

LIBFT	:=	libft
LIBFT_L :=	libft/libft.a

all:		libft $(NAME)

.c.o:
			@$(CC) $(CFLAGS) -c $< -o $@ $(LFLAGS)/$(LIBFT)

$(NAME):	$(OBJS)
			@cp ./libft/libft.a $(NAME)
			@$(LIB) $(NAME) $(OBJS)
			@$(RLIB) $(NAME)

clean:
			@$(RM) $(OBJS)

fclean: 	clean
			@$(RM) $(NAME)

libft:
			@$(MAKE) -C $(LIBFT)

re: 		fclean all

.PHONY: 	all clean fclean re libft
