#include "libft.h"

char	*ft_strtrim(char const *src, char const *set)
{
	size_t	i;
	size_t	j;

	if (!src || !set)
		return (NULL);
	i = 0;
	while (src[i] && ft_strchr(set, src[i]))
		i++;
	j = ft_strlen(src);
	while (j > i && ft_strchr(set, src[j - 1]))
		j--;
	return (ft_substr(src, i, j - i));
}
