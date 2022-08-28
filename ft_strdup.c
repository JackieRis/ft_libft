/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 05:43:42 by tnguyen-          #+#    #+#             */
/*   Updated: 2021/11/04 19:53:36 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	unsigned char	*dst;
	size_t			src_len;

	src_len = ft_strlen(str) + 1;
	dst = malloc(sizeof(char) * src_len);
	if (!dst)
		return (NULL);
	ft_memcpy(dst, str, src_len);
	return ((char *)dst);
}
