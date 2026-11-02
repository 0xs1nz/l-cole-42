/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmanas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 16:04:28 by aelmanas          #+#    #+#             */
/*   Updated: 2026/11/01 16:04:30 by aelmanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *p, int x, size_t n)
{
	const unsigned char	*ptr;

	ptr = (const unsigned char *)p;
	while (n--)
	{
		if (*ptr == (unsigned char)x)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
