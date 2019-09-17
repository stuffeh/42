NAME=libft.a
SRC=srcs/
CLASSES=ft_strlen ft_putchar
HEADERS_FOLDER=includes

all: make_lib

make_lib:
	gcc -I $(HEADERS_FOLDER) -c $(addprefix $(SRC),$(addsuffix .c, $(CLASSES)))
	ar -rv $(NAME) $(addsuffix .o, $(CLASSES))
	ranlib $(NAME)

clean:
	rm $(addsuffix .o, $(CLASSES))

fclean: clean
	rm -f $(addsuffix .o, $(CLASSES))
	rm -f $(NAME)

re: fclean all