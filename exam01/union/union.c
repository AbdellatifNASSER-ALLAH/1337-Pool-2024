#include <unistd.h>

int	main(int ac, char **av)
{
	if(ac == 3)
	{
		int i;
		char *f;
		char *s;
		int arr[255];

		i = 0;
		f = av[1];
		s = av[2];
		while (i < 255)
			arr[i++] = 0;
		while (*f)
		{
			if (!arr[(unsigned char)*f])
			{
				write(1, f, 1);
				arr[(unsigned char)*f] = 1;
			}
			f++;
		}
		while (*s)
		{
			if (!arr[(unsigned char)*s])
			{
				write(1, s, 1);
				arr[(unsigned char)*s] = 1;
			}
			s++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
