/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 05:43:06 by tnguyen-          #+#    #+#             */
/*   Updated: 2021/11/08 22:17:26 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*a;

	i = -1;
	a = (char *)s;
	if (!s)
		return (NULL);
	while (n > ++i)
		if (a[i] == (char)c)
			return ((void *)&s[i]);
	return (0);
}
