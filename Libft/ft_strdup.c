#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dst;
	size_t	n;

	n = ft_strlen(src);
	dst = (char *)malloc(sizeof(char) * (n + 1));
	if (!dst)
		return (NULL);
	ft_memcpy(dst, src, n + 1);
	return (dst);
}
