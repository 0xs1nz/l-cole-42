#include "libft.h"

char	*ft_strchr(const char *s, int x)
{
	while (*s)
	{
		if (*s == (char)x)
			return ((char *)s);
		s++;
	}
	if ((char)x == 0)
		return ((char *)s);
	return (NULL);
}
