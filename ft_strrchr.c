/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 05:44:20 by tnguyen-          #+#    #+#             */
/*   Updated: 2021/11/05 11:50:32 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int				i;
	size_t			compt;

	i = 0;
	compt = 0;
	while (str[i])
	{
		i++;
		if (str[i] == (char )c)
			compt = i;
	}
	if (str[compt] == (char )c)
		return ((char *)str + compt);
	return (NULL);
}
