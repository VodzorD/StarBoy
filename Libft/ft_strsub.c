/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wscallop <wscallop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:25:17 by wscallop          #+#    #+#             */
/*   Updated: 2019/09/18 21:46:40 by wscallop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	index;

	index = 0;
	if (s == 0 || ft_strlen(s) < (int)start + (int)len)
		return (0);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str)
	{
		while (index < len)
		{
			str[index] = s[start];
			start++;
			index++;
		}
		str[index] = '\0';
		return (str);
	}
	return (NULL);
}
