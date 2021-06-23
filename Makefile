SRC		:=	ft_printf.c \

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

tests:		all
			@$(CC) $(CFLAGS) $(TFLAGS) $(LFLAGS)/$(LIBFT) tests/printf_tests.c $(NAME) -o printf.out
			@$(CC) $(CFLAGS) $(TFLAGS) $(LFLAGS)/$(LIBFT) tests/ft_printf_tests.c $(NAME) -o ft_printf.out
			@./ft_printf.out > ft_printf.result
			@./printf.out > printf.result
			@rm -rf ft_printf.out printf.out
			@diff printf.result ft_printf.result

re: 		fclean all

.PHONY: 	all clean fclean re libft tests
