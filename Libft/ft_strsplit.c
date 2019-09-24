/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wscallop <wscallop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 21:09:52 by wscallop          #+#    #+#             */
/*   Updated: 2019/09/18 21:46:40 by wscallop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_words(char const *s, char c)
{
	size_t	index;
	size_t	flag;

	flag = 0;
	index = 0;
	if (s)
	{
		while (s[index] != '\0')
		{
			if (s[index] != c && (s[index + 1] == c
			|| s[index + 1] == '\0'))
				flag++;
			index++;
		}
		return (flag);
	}
	return (0);
}

static size_t	lenwords(const char *s, char c)
{
	size_t	index;

	index = 0;
	while (s[index] != c && s[index] != '\0')
		index++;
	return (index);
}

static void		ft_freedom(char **mass, size_t index_0)
{
	size_t index;

	index = 0;
	while (index < index_0)
	{
		ft_memdel((void *)mass[index]);
		index++;
	}
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	index_0;
	size_t	index;
	char	**mass;

	index = ft_words(s, c);
	index_0 = 0;
	mass = (char **)malloc(sizeof(char *) * (index + 1));
	if (!mass || !s || !c)
		return (NULL);
	while (index_0 < index && *s)
	{
		while (*s == c)
			s++;
		mass[index_0] = ft_strsub(s, 0, lenwords(s, c));
		s += lenwords(s, c);
		if (mass[index_0] == NULL)
		{
			ft_freedom(mass, index_0);
			return (NULL);
		}
		index_0++;
	}
	mass[index_0] = NULL;
	return (mass);
}
