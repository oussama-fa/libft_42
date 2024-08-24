NAME = libft.a

CC = cc

FLAGS = -Wall -Wextra -Werror

RM = rm -rf

AR = ar rc

FILES = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_strdup.c ft_isprint.c ft_strlen.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_atoi.c #ft_memmove.c  ft_memset.c ft_bzero.c ft_memcpy.c ft_strlcpy.c ft_strlcat.c \
		  ft_memchr.c ft_memcmp.c ft_strnstr.c  ft_calloc.c  ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c 

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c \
		ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJ = $(FILES:.c=.o)

BONUS_OBJ = $(BONUS:.c=.o)

ALL = $(OBJ) $(BONUS_OBJ)

all: $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

bonus: $(BONUS_OBJ)
	$(AR) $(NAME) $(BONUS_OBJ)

%.o: %.c libft.h
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(ALL)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus