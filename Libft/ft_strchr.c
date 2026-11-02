/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmanas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 15:59:39 by aelmanas          #+#    #+#             */
/*   Updated: 2026/11/01 15:59:41 by aelmanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int x)
{
	while (*s)
	{
		if (*s == (char)x)
			return ((char *)s);
		s++;
	}
	if ((char)x == 0)
		return ((char *)s);
	return (NULL);
}
