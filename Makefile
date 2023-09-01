NAME = libftprintf.a

SOURCES = $(wildcard *.c)

OBJECTS = $(SOURCES:.c=.o)

HEADER = ft_printf.h

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(HEADER) $(OBJECTS) 
	cc $(FLAGS) -c $(SOURCES)
	ar rc $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re