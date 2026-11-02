/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmanas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 16:04:39 by aelmanas          #+#    #+#             */
/*   Updated: 2026/11/01 16:04:42 by aelmanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *d, int x, size_t n)
{
	unsigned char	*dst;
	size_t			i;

	dst = (unsigned char *)d;
	i = 0;
	while (i < n)
	{
		dst[i] = (unsigned char)x;
		i++;
	}
	return (d);
}
