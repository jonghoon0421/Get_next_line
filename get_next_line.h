/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <jonkim@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 15:40:12 by jonkim            #+#    #+#             */
/*   Updated: 2017/11/18 18:02:50 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 10

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "libft.h"

int	get_next_line(const int fd, char **line);
int	get_line(int fd, char **data, char **line, int ret);

#endif
