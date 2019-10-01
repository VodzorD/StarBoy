/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wscallop <wscallop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 20:06:28 by wscallop          #+#    #+#             */
/*   Updated: 2019/10/01 20:10:38 by wscallop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

/*int		readlinewidth(int fd)
{
	char 		buff[BUFF_SIZE];
	ssize_t 	nbread;
	size_t		s;


	nbread = 0;
	s = BUFF_SIZE;
	while ( s == BUFF_SIZE && s == read(fd, (void *)buff, BUFF_SIZE))
	{
		s = 0;
		while (s != BUFF_SIZE && buff[s] != '\n' && buff[s])
			s++;
		nbread = nbread + s;
	}
	nbread += s;
	if (nbread <= 0)
		return (-1);
	return ((int)nbread);
}

char	*readandprintlines(int fd, size_t line)
{
	char		*buff;
	ssize_t 	nbread;

	buff = (char *)malloc(sizeof(char) * (line + 1));
	if (!buff)
		return (0);
	(void)ft_memset((void *)buff, 0, line + 1);
	nbread = read(fd, (void *) buff, line);
	return (buff);
}

int		get_next_line(const int fd, char **line)
{
	if (!fd || fd == -1)
		return (-1);
	*line = readandprintlines(fd, readlinewidth(fd));
	ft_putstr(*line);
	if (!*line)
	{
		free(*line);
		return (0);
	}
	else
		return (1);
}*/

/*
int				main(void)
{
	char		*line;
	int			fd;
	int			ret;
	int			count_lines;
	char		*filename;
	int			errors;

	filename = "gnl7_2.txt";
	fd = open(filename, O_RDONLY);
	if (fd > 2)
	{
		count_lines = 0;
		errors = 0;
		line = NULL;
		while ((ret = get_next_line(fd, &line)) > 0)
		{
			if (count_lines == 0 && strcmp(line, "1234567") != 0)
				errors++;
			if (count_lines == 1 && strcmp(line, "abcdefgh") != 0)
				errors++;
			count_lines++;
			if (count_lines > 50)
				break ;
		}
		close(fd);
		if (count_lines != 2)
			printf("-> must have returned '1' twice instead of %d time(s)\n", count_lines);
		if (errors > 0)
			printf("-> must have read \"1234567\" and \"abcdefgh\"\n");
		if (count_lines == 2 && errors == 0)
			printf("OK\n");
	}
	else
		printf("An error occured while opening file %s\n", filename);
	return (0);
}*/
