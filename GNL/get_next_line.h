/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wscallop <wscallop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 20:12:07 by wscallop          #+#    #+#             */
/*   Updated: 2019/10/01 20:58:11 by wscallop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft/includes/libft.h"
# include <zconf.h>
# include <stdlib.h>
# include <fcntl.h>
# define BUFF_SIZE 4

int	get_next_line(const int fd, char **line);

#endif
