#include <unistd.h>

int main(int ac, char **av)
{
	char *str;
	int i, j;

	str = av[1];
	if (ac == 2)
	{
		i = 0;
		while (str[i])
		{
			if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			{
				j = 0;
				while ((str[i] >= 'a' && str[i] <= 'z') && j <= str[i] - 'a')
				{
					write(1,  &str[i], 1);
					j++;
				}
				j = 0;
				while ((str[i] >= 'A' && str[i] <= 'Z') && j <= str[i] - 'A')
				{
					write(1,  &str[i], 1);
					j++;
				}
			}
			else
				write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
