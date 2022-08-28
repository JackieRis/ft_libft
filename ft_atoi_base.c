/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 01:27:38 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/13 02:51:28 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_base(int nb, const char *base, int *b)
{
	int	nbase;

	nbase = ft_strlen(base);
	printf("%d\n", nb);
	if (nbase == 0)
		return ;
	if (nb >= nbase)
		ft_base(nb / nbase, base, b);
	(*b) = (*b) * 10 + (base[nb % nbase] - '0');
}

int	ft_atoi_base(const char *str, const char *base)
{
	int	i;
	int	signe;
	int	r;
	int	b;

	i = 0;
	signe = 1;
	r = 0;
	b = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || \
				str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		signe = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	if (!(str[i] > 47 && str[i] < 58))
		return (0);
	while (str[i] > 47 && str[i] < 58)
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	ft_base(r, base, &b);
	return (b * signe);
}

int	main(void)
{
	const char	*str = "15";
	const char	*base = "01";

	printf("%d\n", ft_atoi_base(str, base));
	return (0);
}
