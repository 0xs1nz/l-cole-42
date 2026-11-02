/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmanas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 15:59:16 by aelmanas          #+#    #+#             */
/*   Updated: 2026/11/01 16:18:56 by aelmanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *d, const void *s, size_t n)
{
	unsigned char		*dst;
	const unsigned char	*src;
	size_t				i;

	if (!d && !s)
		return (d);
	dst = (unsigned char *)d;
	src = (const unsigned char *)s;
	i = 0;
	while (n--)
	{
		dst[i] = src[i];
		i++;
	}
	return (d);
}
