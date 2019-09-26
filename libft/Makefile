NAME=libft.a

SRC=./

CLASSES=ft_bzero ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint ft_memalloc ft_putchar_fd ft_putchar ft_putendl_fd ft_putendl ft_putnbr ft_putnbr_fd ft_putstr ft_putstr_fd ft_strlen ft_strcpy ft_strncpy ft_strtrim

HEADERS_FOLDER=./includes

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