NAME=libft.a

SRC=./

CLASSES=ft_atoi \
	ft_bzero \
	ft_isalnum \
	ft_isalpha \
	ft_isascii \
	ft_isdigit \
	ft_isprint \
	ft_strcat \
	ft_strchr \
	ft_strcmp \
	ft_strcpy \
	ft_strdup \
	ft_strlcat \
	ft_strlen \
	ft_strncat \
	ft_strncmp \
	ft_strncpy \
	ft_strrchr \
	ft_memalloc \
	ft_putchar \
	ft_putchar_fd \
	ft_putendl \
	ft_putendl_fd \
	ft_putnbr \
	ft_putnbr_fd \
	ft_putstr \
	ft_putstr_fd \
	ft_haswhitespace \
	ft_strndup \
	ft_strnlen \
	ty_atoi

HEADERS_FOLDER=./

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I $(HEADERS_FOLDER) -c $(addprefix $(SRC),$(addsuffix .c, $(CLASSES)))
	ar -rv $(NAME) $(addsuffix .o, $(CLASSES))
	ranlib $(NAME)

clean:
	rm -f $(addsuffix .o, $(CLASSES))

fclean: clean
	rm -f $(NAME)

re: fclean all