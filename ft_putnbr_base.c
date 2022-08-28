/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:54:35 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/13 18:04:54 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base(unsigned int n, char *base)
{
	unsigned int	nbase;

	nbase = ft_strlen(base);
	if (nbase == 0)
		return ;
	if (n >= nbase)
		ft_putnbr_base(n / nbase, base);
	ft_putchar_fd(base[n % nbase], 1);
}
