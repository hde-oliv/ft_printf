SRC		:=	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
			ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
			ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c \
			ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c \
			ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
			ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
			ft_lstmap.c ft_dfree.c ft_isspace.c ft_intlen.c ft_range.c \
			ft_abs.c ft_atoll.c \

INC_DIR :=	includes
SRC_DIR :=	srcs
OBJ_DIR :=	objs

INCLS   :=	$(INC_DIR)
SRCS	:=	$(addprefix $(SRC_DIR)/,$(SRC))
OBJS    :=	$(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

NAME	:=	libft.a
RLIB    :=	ranlib
CC		:=	clang
LIB		:=	ar rcs

CFLAGS	+=	-Wall -Wextra -Werror
LFLAGS  += -I.
RM		:=	rm -rf



all:		obj $(NAME)

$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.c
			$(CC) $(CFLAGS) -c $< -o $@ $(LFLAGS)/$(INCLS)

$(NAME):	$(OBJS)
			@$(LIB) $(NAME) $(OBJS)
			@$(RLIB) $(NAME)

obj:
			@mkdir -p $(OBJ_DIR)

clean:
			@$(RM) $(OBJS) $(OBJ_DIR)

fclean: 	clean
			@$(RM) $(NAME)

re: 		fclean all

.PHONY: 	all clean fclean re obj
