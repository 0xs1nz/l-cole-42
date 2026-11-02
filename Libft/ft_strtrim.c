/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmanas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 16:07:23 by aelmanas          #+#    #+#             */
/*   Updated: 2026/11/01 16:07:25 by aelmanas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
