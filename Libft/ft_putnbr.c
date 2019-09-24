/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wscallop <wscallop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 19:29:01 by wscallop          #+#    #+#             */
/*   Updated: 2019/09/18 21:46:40 by wscallop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	size_t	index;

	index = 10000000000;
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else if (n == 0)
		ft_putstr("0");
	else
	{
		if (n < 0 && (n *= -1))
			ft_putchar('-');
		while (n / index == 0)
			index /= 10;
		while (index != 0)
		{
			if (n / index == 0)
				ft_putchar('0');
			else
				ft_putchar(n / index + 48);
			n = n % index;
			index /= 10;
		}
	}
}
