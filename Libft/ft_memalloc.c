/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wscallop <wscallop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 20:17:02 by wscallop          #+#    #+#             */
/*   Updated: 2019/09/18 21:46:40 by wscallop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	unsigned char	*str;
	size_t			index;

	index = 0;
	str = (unsigned char *)malloc(sizeof(unsigned char) * size + 1);
	if (str && size <= 9223372036854775807UL)
	{
		while (index < size + 1)
		{
			str[index] = 0;
			index++;
		}
		str[index] = 0;
		return (str);
	}
	return (NULL);
}
