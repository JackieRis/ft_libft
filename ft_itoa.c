/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:53:01 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/02/09 19:34:18 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(char *tmp, int *i, long long int n)
{
	if (n > 9)
		ft_putnbr(tmp, i, n / 10);
	*(tmp + *i) = (n % 10) + '0';
	(*i) += 1;
}

char	*ft_itoa(int n)
{
	char			*tmp;
	int				i;
	long long int	x;

	i = 0;
	tmp = malloc(12);
	if (!tmp)
		return (NULL);
	x = (long long int)n * (1 -((n < 0) * 2));
	tmp[0] = '-';
	ft_putnbr(&tmp[n < 0], &i, x);
	tmp[i + (n < 0)] = '\0';
	return (tmp);
}
