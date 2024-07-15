#include "ft_stock_str.h"
#include <stdio.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	main(void)
{
	char		*p[10] = {"mac", "unix", "java", "c", "windows"};
	t_stock_str	*stock;

	stock = ft_strs_to_tab(5, p);
	printf("size: %d, str: %s, copy: %s\n", stock[0].size, stock[0].str,
		stock[0].copy);
	printf("size: %d, str: %s, copy: %s\n", stock[1].size, stock[1].str,
		stock[1].copy);
	printf("size: %d, str: %s, copy: %s\n", stock[2].size, stock[2].str,
		stock[2].copy);
	printf("size: %d, str: %s, copy: %s\n", stock[3].size, stock[3].str,
		stock[3].copy);
	printf("size: %d, str: %s, copy: %s\n", stock[4].size, stock[4].str,
		stock[4].copy);
	return (0);
}
