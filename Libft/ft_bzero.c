/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wscallop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:30:48 by wscallop          #+#    #+#             */
/*   Updated: 2019/09/18 21:43:52 by wscallop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *array, size_t n)
{
	size_t		index;

	index = 0;
	while (index != n)
	{
		((char *)array)[index] = (char)(unsigned char)NULL;
		index++;
	}
}
