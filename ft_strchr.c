/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 05:43:38 by tnguyen-          #+#    #+#             */
/*   Updated: 2021/11/04 19:46:40 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	s_len;

	i = -1;
	s_len = ft_strlen(s);
	if (!c)
		return ((char *)s + s_len);
	while (++i < s_len)
		if (s[i] == (char) c)
			return ((char *)s + i);
	return (0);
}
