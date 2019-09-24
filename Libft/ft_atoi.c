/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wscallop <wscallop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 17:46:54 by wscallop          #+#    #+#             */
/*   Updated: 2019/09/18 21:43:52 by wscallop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int					f_sign;
	unsigned long long	num;

	num = 0;
	f_sign = 1;
	while (*str == '\t' || *str == '\n' || *str == '\v' ||
	*str == '\f' || *str == '\r' || *str == ' ')
		++str;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			f_sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num *= 10;
		num += *str - '0';
		++str;
	}
	if (num == 0)
		return (0);
	if (f_sign == -1)
		return (num * -1);
	return (num);
}
