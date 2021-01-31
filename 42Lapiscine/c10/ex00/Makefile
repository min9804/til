CFLAGS = -Wall -Wextra -Werror

TARGET = ft_display_file
SOURCES = main.c
OBJS = $(SOURCES:.c=.o)

all: $(TARGET)

%.o: %.c
	gcc $(CFLAGS) -c $<

$(TARGET): $(OBJS)
	     gcc $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all
