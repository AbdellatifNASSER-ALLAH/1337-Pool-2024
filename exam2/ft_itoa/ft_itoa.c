#include <stdlib.h>

void	ft_swap(char *a, char *b)
{
	char	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_str(char *tab)
{
	int	i, n;

	n = 0;
	while (tab[n])
		n++;
	i = 0;
	while (i < n - 1)
	{
		ft_swap(&tab[i], &tab[n - 1]);
		i++;
		n--;
	}
}

char	*ft_strdup(char *src)
{
	char	*p;
	int	n;

	n = 0;
	while (src[n])
		n++;
	p = (char *)malloc(n * sizeof(char) + 1);
	n = 0;
	while (src[n])
	{
		p[n] = src[n];
		n++;
	}
	p[n] = '\0';
	return (p);
}

char	*ft_itoa(int nbr)
{
	char p[13];
	char *ptr;
	int	i;
	int n;
	
	if (nbr == -2147483648)
		return (ft_strdup("-2147483648"));
	i = 0;
	n = nbr;
	if (nbr < 0)
		nbr *= -1;
	while (nbr > 0)
	{
		p[i++] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	if (n < 0)
		p[i++] = '-';
	p[i] = '\0';
	ft_rev_str(p);
	ptr = ft_strdup(p);
	return (ptr);
}
