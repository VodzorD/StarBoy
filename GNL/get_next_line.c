/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wscallop <wscallop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 20:27:58 by wscallop          #+#    #+#             */
/*   Updated: 2019/10/01 20:18:25 by wscallop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "get_next_line.h"

static char			*end(char *bf)
{
	int 	ln;
	char 	*str;

	ln = 0;
	while (bf[ln] != '\n' && bf[ln] != '\0')
		ln++;
	str = ft_strsub(bf, 0, ln);
	return (str);
}

static int			bffr(char *str, char **line)
{
	if (*str)
	{
		if (ft_strchr(str, '\n'))
		{
			*line = end(str);
			ft_strcpy(str, ft_strchr(str, '\n') + 1);
			return (1);
		}
		*line = ft_strdup(str);
	}
	else
		*line = ft_strdup("");
	return (0);
}

static int			chckend(char *vcs, char **line, char *str)
{
	char 	*tmp;
	char 	*tmp2;

	if (ft_strchr(vcs, '\n'))
	{
		if (!(tmp = end(vcs)))
			return (-1);
		tmp2 = *line;
		*line = ft_strjoin(tmp2, tmp);
		free(tmp2);
		free(tmp);
		ft_strcpy(str, ft_strchr(vcs, '\n') + 1);
		return (1);
	}
	else
	{
		tmp = *line;
		*line = ft_strjoin(tmp, vcs);
		free(tmp);
	}
	return (0);
}

int					get_next_line(const int fd, char **line)
{
	static char		str[BUFF_SIZE + 1];
	char 			vcs[BUFF_SIZE + 1];
	int				i;

	if (!line || fd < 0)
		return (-1);
	i = bffr((char *)str, line);
	if (i)
		return (i);
	while ((i = read(fd, vcs, BUFF_SIZE)) > 0)
	{
		vcs[i] = '\0';
		if (chckend(vcs, line, str))
			return (1);
		if (i < BUFF_SIZE)
			return (1);
	}
	if (i < 0)
		return (-1);
	if (ft_strcmp(*line, "") != 0)
	{
		if (read(fd, vcs, BUFF_SIZE) == 0)
			*line = "";
		return (1);
	}
	return (0);
}*/

#include "get_next_line.h"

static char		*ft_end_line_ch_cut(char *buf)
{
	char	*str;
	int		len;

	len = 0;
	while (buf[len] != '\n' && buf[len] != '\0')
		len++;
	str = ft_strsub(buf, 0, len);
	return (str);
}

static int		ft_get_buffer(char *s, char **line)
{
	if (*s)
	{
		if (ft_strchr(s, '\n'))
		{
			*line = ft_end_line_ch_cut(s);
			ft_strcpy(s, ft_strchr(s, '\n') + 1);
			return (1);
		}
		*line = ft_strdup(s);
	}
	else
		*line = ft_strdup("");
	return (0);
}

static int		ft_end_line_ch_checker(char *buf, char **line, char *s)
{
	char			*temp;
	char			*temp2;

	if (ft_strchr(buf, '\n'))
	{
		if (!(temp = ft_end_line_ch_cut(buf)))
			return (-1);
		temp2 = *line;
		*line = ft_strjoin(temp2, temp);
		free(temp);
		free(temp2);
		ft_strcpy(s, ft_strchr(buf, '\n') + 1);
		return (1);
	}
	else
	{
		temp = *line;
		*line = ft_strjoin(temp, buf);
		free(temp);
	}
	return (0);
}

int				get_next_line(const int fd, char **line)
{
	static char		s[BUFF_SIZE + 1];
	char			buf[BUFF_SIZE + 1];
	int				ret;

	if (!line || fd < 0)
		return (-1);
	ret = ft_get_buffer((char*)s, line);
	if (ret)
		return (ret);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (ft_end_line_ch_checker(buf, line, s))
			return (1);
		if (ret < BUFF_SIZE)
			return (1);
	}
	if (ret < 0)
		return (-1);
	if (ft_strcmp(*line, "") != 0)
		return (1);
	return (0);
}
