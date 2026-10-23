#include "libft.h"

void	*ft_calloc(size_t count, size_t n)
{
	void	*ptr;

	if (count != 0 && n > ((size_t)-1) / count)
		return (NULL);
	if (count == 0 || n == 0)
	{
		count = 1;
		n = 1;
	}
	ptr = malloc(count * n);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * n);
	return (ptr);
}
