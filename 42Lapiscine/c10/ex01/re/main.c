#include <fcntl.h>
#include <unistd.h>
#include <string.h> 
#include <errno.h> 
#include <libgen.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	print_error_msg(char *prog, char *file)
{
	ft_putstr(basename(prog));
	ft_putstr(": ");
	ft_putstr(file);
	ft_putstr(": ");
	ft_putstr(strerror(errno));
	ft_putstr("\n");
	errno = 0;
}

void	display_file(int fd, char *file, char *prog)
{
	long 		size;
	unsigned char	buf[1];

	while ((size = read(fd, buf, 1)))
	{
		if (errno)
		{
			print_error_msg(prog, file);
			return ;
		}
		write(1, buf, size);
	}
}

int	main(int ac, char **av)
{
	int fd;
	int i;
	char *prog;

	prog = av[0];
	if (ac == 1)
		display_file(0, 0, prog);
	else
	{
		i = 0;
		while (++i < ac)
		{
			if ((fd = open(av[i], O_RDONLY)) == -1)
			{
				print_error_msg(prog, av[i]);
				continue ;
			}
			display_file(fd, av[i], prog);
			close(fd);
		}
	}
	return (0);
}
