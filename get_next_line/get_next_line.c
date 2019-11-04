#include "get_next_line.h"
#include <fcntl.h>

int	get_next_line(const int fd, char **line)
{
	int		file;
	char 	c;
	if (fd < 2)
	{
		ft_putstr("File name missing.\n");
	}
	else if (fd > 2)
	{
		ft_putstr("Too many arguments.\n");
	}
	else
	{
		file = open(line[1], O_RDONLY);
		if (file < 0)
			return (0);
		while (read(file, &c, 1))
		{
			ft_putchar(c);
		}
	}
	return (0);
}