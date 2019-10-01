/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_file.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wscallop <wscallop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 20:12:07 by wscallop          #+#    #+#             */
/*   Updated: 2019/10/01 19:11:21 by wscallop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_FILE_H
#define GET_NEXT_FILE_H

#define BUFF_SIZE 4

#include "libft/includes/libft.h"
#include <zconf.h>
#include <stdlib.h>
#include <fcntl.h>

int			get_next_line(const int fd, char **line);

#endif
