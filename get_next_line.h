/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelivan <vpelivan@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 14:26:35 by vpelivan          #+#    #+#             */
/*   Updated: 2018/12/04 14:18:12 by vpelivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/libft.h"
# include <fcntl.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

# define BUFF_SIZE 2048

int		get_next_line(const int fd, char **line);

#endif
