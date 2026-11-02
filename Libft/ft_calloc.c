/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmanas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 16:03:33 by aelmanas          #+#    #+#             */
/*   Updated: 2026/11/01 16:03:35 by aelmanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t n)
{
	void	*p;

	if (count != 0 && n > ((size_t)-1) / count)
		return (NULL);
	if (count == 0 || n == 0)
	{
		count = 1;
		n = 1;
	}
	p = malloc(count * n);
	if (!p)
		return (NULL);
	ft_bzero(p, count * n);
	return (p);
}
