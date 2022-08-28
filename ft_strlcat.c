/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 05:43:53 by tnguyen-          #+#    #+#             */
/*   Updated: 2021/11/04 18:13:48 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = ft_strlen(dest);
	if (size < count || size == 0)
		return (ft_strlen(src) + size);
	while (src[i] != '\0' && i + count < size - 1)
	{
		dest[i + count] = src[i];
		i++;
	}
	dest[i + count] = '\0';
	return (count + ft_strlen(src));
}
