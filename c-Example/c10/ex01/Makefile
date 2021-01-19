CFLAGS = -Wall -Wextra -Werror
TARGET = ft_cat
SORCES = main.c
OBJS = $(SORCES:.c=.o)

%.o: %.c
	gcc $(CFLAGS) -c $<

all: $(TARGET)

$(TARGET): $(OBJS)
	     gcc $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all
