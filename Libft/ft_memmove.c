/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmanas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 16:01:40 by aelmanas          #+#    #+#             */
/*   Updated: 2026/11/01 16:01:42 by aelmanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t n)
{
	unsigned char		*dst;
	const unsigned char	*src;
	size_t				i;

	if (!d && !s)
		return (d);
	dst = (unsigned char *)d;
	src = (const unsigned char *)s;
	if (dst > src)
	{
		while (n--)
			dst[n] = src[n];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dst[i] = src[i];
			i++;
		}
	}
	return (d);
}
