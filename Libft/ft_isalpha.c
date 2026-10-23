#include "libft.h"

int	ft_isalpha(int x)
{
	return ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z'));
}
