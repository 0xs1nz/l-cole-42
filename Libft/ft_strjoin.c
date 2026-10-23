#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*d;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	d = (char *)malloc(sizeof(char) * len);
	if (!d)
		return (NULL);
	ft_strlcpy(d, s1, len);
	ft_strlcat(d, s2, len);
	return (d);
}
