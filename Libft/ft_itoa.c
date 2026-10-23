#include "libft.h"

static size_t	count_digits(long x)
{
	size_t	n;

	n = 0;
	if (x <= 0)
		n++;
	while (x)
	{
		x = x / 10;
		n++;
	}
	return (n);
}

char	*ft_itoa(int x)
{
	char	*s;
	size_t	n;
	long	y;

	y = x;
	n = count_digits(y);
	s = (char *)malloc(sizeof(char) * (n + 1));
	if (!s)
		return (NULL);
	s[n] = 0;
	if (y == 0)
		s[0] = '0';
	else if (y < 0)
	{
		s[0] = '-';
		y = -y;
	}
	while (y > 0)
	{
		n--;
		s[n] = (y % 10) + '0';
		y = y / 10;
	}
	return (s);
}
