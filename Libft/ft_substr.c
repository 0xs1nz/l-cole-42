#include "libft.h"

char	*ft_substr(char const *src, unsigned int start, size_t n)
{
	char	*dst;
	size_t	i;
	size_t	s_len;

	if (!src)
		return (NULL);
	s_len = ft_strlen(src);
	if (start >= s_len)
		n = 0;
	else if (n > s_len - start)
		n = s_len - start;
	dst = (char *)malloc(sizeof(char) * (n + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dst[i] = src[start + i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}
