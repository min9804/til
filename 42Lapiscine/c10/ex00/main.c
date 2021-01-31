#include <unistd.h>
#include <fcntl.h>

void ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int main(int argc, char *argv[])
{
	char c;
	int fd;
	int size;

	if (argc == 1)
		ft_putstr("File name minssing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			ft_putstr("Cannot read file.\n");
		else
		{
			size = read(fd, &c, 1);
			while (size)
			{
				write(1, &c, 1);
				size = read(fd, &c, 1);
			}
			close(fd);
		}
	}
	return (0);
}



