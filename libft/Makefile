NAME=libft.a

SRC=./

CLASSES=ft_strlen ft_putchar_fd ft_putchar

HEADERS_FOLDER=./includes

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I $(HEADERS_FOLDER) -c $(addprefix $(SRC),$(addsuffix .c, $(CLASSES)))
	ar -rc $(NAME) $(addsuffix .o, $(CLASSES))
	ranlib $(NAME)

clean:
	rm -f $(addsuffix .o, $(CLASSES))

fclean: clean
	rm -f $(NAME)

re: fclean all