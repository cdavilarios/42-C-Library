/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdavila <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 18:59:24 by cdavila           #+#    #+#             */
/*   Updated: 2016/11/01 18:59:26 by cdavila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int nn;

	nn = n;
	if (n < 0)
	{
		ft_putchar('-');
		nn = -n;
	}
	if (nn / 10 > 0)
	{
		ft_putnbr(nn / 10);
	}
	ft_putchar((nn % 10) + '0');
}
