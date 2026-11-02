/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmanas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 16:05:29 by aelmanas          #+#    #+#             */
/*   Updated: 2026/11/01 16:05:32 by aelmanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int x)
{
	char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)x)
			last = (char *)s;
		s++;
	}
	if ((char)x == 0)
		return ((char *)s);
	return (last);
}
