#include "ex02.h"

char 	*g_prog;

void	display_file(int fd, char *buf, int buf_size)
{
	long long 	i;
	int 		tmp;

	if (buf_size == 0)
	{
		while (read(fd, buf, 1))
			if (errno)
				return ;
	}
	else
	{
		i = 0;
		while (read(fd, &buf[(i % buf_size)], 1))
		{
			if (errno)
				return ;
			++i;
		}
		tmp =  i % buf_size;
		if (i >= buf_size)
			write(1, buf + tmp, buf_size - tmp);
		write(1, buf, tmp);
	}
}

void	display_header(int ac, char **av, char *buf, int buf_size)
{
	int fd;
	int i;
	int k;

	i = 2;
	k = 0;
	while (++i < ac)
	{
		errno = 0;
		if ((fd = open(av[i], O_RDONLY)) == -1)
		{
			print_error_msg(av[i]);
			continue ;
		}
		if (ac > 4)
		{
			 if(k)
				 ft_putstr("\n");
			 ft_putstr("==> ");
			 ft_putstr(av[i]);
			 ft_putstr(" <==\n");
		}
		k = 1;
		display_file(fd, buf, buf_size);
		close(fd);
	}
}

int	main(int ac, char **av)
{
	char	*buf;
	int 	buf_size;

	g_prog = av[0];
	buf_size = ft_atoi(av[2]);
	buf = (char*)malloc(buf_size);
	if (ac == 3)
		display_file(0, buf, buf_size);
	else
		display_header(ac, av, buf, buf_size);
	free(buf);
		return (0);
}
