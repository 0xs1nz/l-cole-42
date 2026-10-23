#include "libft.h"

char	*ft_strrchr(const char *s, int x)
{
	char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)x)
			last = (char *)s;
		s++;
	}
	if ((char)x == 0)
		return ((char *)s);
	return (last);
}
