/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 05:43:22 by tnguyen-          #+#    #+#             */
/*   Updated: 2021/11/08 21:56:15 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*cast_dst;
	unsigned char	*cast_src;

	i = -1;
	cast_dst = (unsigned char *) dst;
	cast_src = (unsigned char *) src;
	if (!src && !dst)
		return (NULL);
	if (cast_dst > cast_src)
	{
		while (0 < n)
		{
			cast_dst[n - 1] = cast_src[n - 1];
			n--;
		}
	}
	else
	{
		while (++i < n)
			cast_dst[i] = cast_src[i];
	}
	return ((void *)cast_dst);
}
