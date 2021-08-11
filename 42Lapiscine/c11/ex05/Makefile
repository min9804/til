CC = gcc
CFLAGS = -Wall -Wextra -Werror

TARGET =  do-op

INCLUDES_DIR = ./includes
INCLUDES =	ft_do_op.h	\
			ft_calc.h

SRCS_DIR = ./srcs
SRCS =	ft_calc.c	\
		ft_do_op.c

OBJS = $(addprefix $(SRCS_DIR)/, $(SRCS:.c=.o))

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

all : $(TARGET)

clean :
	rm -f $(OBJS)

fclean :
	rm -f ${TARGET}

re : fclean all

.c.o :
	$(CC) $(CFLAGS) -I $(INCLUDES_DIR) -c $< -o $(<:.c=.o)
