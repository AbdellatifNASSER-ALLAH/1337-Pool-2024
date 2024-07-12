

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		char *f;
		char *s;

		f = av[1];
		s = av[2];
		while (*s && *f)
		{
			while (*s == *f && *f)
				f++;
			if (!*f)
				ft_putstr(av[1]);
			s++;
		}
	}
	ft_putstr("\n");
	return (0);
}
