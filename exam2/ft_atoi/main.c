#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	ft_atoi(const char *str);

int main()
{
	printf("std: %d, ft_atoi: %d\n", atoi("--657"),ft_atoi("--657"));  
	printf("std: %d, ft_atoi: %d\n", atoi(" -22 3"),ft_atoi(" -22 3"));  
	printf("std: %d, ft_atoi: %d\n", atoi(" +- 9"),ft_atoi(" +- 9"));  
	printf("std: %d, ft_atoi: %d\n", atoi("  0-9"),ft_atoi("  0-9"));  
	printf("std: %d, ft_atoi: %d\n", atoi("INT_MIN"),ft_atoi("INT_MIN"));  
	return 0;
}
