/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 16:04:20 by dclark            #+#    #+#             */
/*   Updated: 2020/12/23 17:58:46 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif

# include <unistd.h>
# include <stdlib.h>

int		get_next_line(int fd, char **line);
char	*get_line(char *tmp);
char	*get_after_eol(char *tmp);
char	*ft_strjoin(char *tmp, int tmp_sz, char *buffer, int bytes_read);
int		check_eol(char *tmp);
int		ft_strlen(char *str);
int		return_zero(char *tmp);

#endif
