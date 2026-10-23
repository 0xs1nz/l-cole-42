#include "libft.h"

void	*ft_memset(void *dst, int x, size_t n)
{
	unsigned char	*d;
	size_t			i;

	d = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		d[i] = (unsigned char)x;
		i++;
	}
	return (dst);
}
