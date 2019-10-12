NAME=libft.a

SRC=./

CLASSES=ft_atoi \
	ft_bzero \
	ft_isalnum \
	ft_isalpha \
	ft_isascii \
	ft_isdigit \
	ft_isprint \
	ft_memccpy \
	ft_memchr \
	ft_memcmp \
	ft_memcpy \
	ft_memmove \
	ft_memset \
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
	ft_strnstr \
	ft_strrchr \
	ft_strstr \
	ft_tolower \
	ft_toupper \
	ft_memalloc \
	ft_memdel \
	ft_putchar \
	ft_putchar_fd \
	ft_putendl \
	ft_putendl_fd \
	ft_putnbr \
	ft_putnbr_fd \
	ft_putstr \
	ft_putstr_fd \
	ft_strclr \
	ft_strdel \
	ft_strequ \
	ft_strjoin \
	ft_strnequ \
	ft_strnew \
	ft_strsub \
	ft_haswhitespace \
	ft_strndup \
	ft_strnlen \
	ty_atoi \
	ty_charcomp

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