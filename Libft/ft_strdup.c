/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmanas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 16:02:24 by aelmanas          #+#    #+#             */
/*   Updated: 2026/11/01 16:02:26 by aelmanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dst;
	size_t	n;

	n = ft_strlen(src);
	dst = (char *)malloc(sizeof(char) * (n + 1));
	if (!dst)
		return (NULL);
	ft_memcpy(dst, src, n + 1);
	return (dst);
}
