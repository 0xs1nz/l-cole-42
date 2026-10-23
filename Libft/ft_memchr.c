#include "libft.h"

void	*ft_memchr(const void *ptr, int x, size_t n)
{
	const unsigned char	*p;

	p = (const unsigned char *)ptr;
	while (n--)
	{
		if (*p == (unsigned char)x)
			return ((void *)p);
		p++;
	}
	return (NULL);
}
