SRC		:=	ft_printf.c \

INC_DIR :=	includes
SRC_DIR :=	srcs
OBJ_DIR :=	objs

INCS   :=	$(INC_DIR)
SRCS	:=	$(addprefix $(SRC_DIR)/,$(SRC))
OBJS    :=	$(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

NAME	:=	libftprintf.a
RLIB    :=	ranlib
CC		:=	clang
LIB		:=	ar rcs

CFLAGS	+=	-Wall -Wextra -Werror
LFLAGS	+=	-I.
TFLAGS	+=	-g -fsanitize=address
RM		:=	rm -rf

LIBFT	:=	libft
LIBFT_I	:=	libft/includes
LIBFT_L :=	libft/libft.a

all:		obj libft $(NAME)

$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.c
			@$(CC) $(CFLAGS) -c $< -o $@ $(LFLAGS)/$(INCS) $(LFLAGS)/$(LIBFT_I)

$(NAME):	$(OBJS)
			@cp ./libft/libft.a $(NAME)
			@$(LIB) $(NAME) $(OBJS)
			@$(RLIB) $(NAME)

obj:
			@mkdir -p $(OBJ_DIR)

clean:
			@$(RM) $(OBJS) $(OBJ_DIR)

fclean: 	clean
			@$(RM) $(NAME)

libft:
			@$(MAKE) -C $(LIBFT)

tests:		all
			@$(CC) $(CFLAGS) $(TFLAGS) $(LFLAGS)/$(INCS)  $(LFLAGS)/$(LIBFT_I) tests/printf_tests.c $(NAME) -o printf.out
			@$(CC) $(CFLAGS) $(TFLAGS) $(LFLAGS)/$(INCS)  $(LFLAGS)/$(LIBFT_I) tests/ft_printf_tests.c $(NAME) -o ft_printf.out
			@./ft_printf.out > ft_printf.result
			@./printf.out > printf.result
			@rm -rf ft_printf.out printf.out
			@diff printf.result ft_printf.result

re: 		fclean all

.PHONY: 	all clean fclean re libft obj
