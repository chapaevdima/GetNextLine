/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anatasha <anatasha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:05:43 by anatasha          #+#    #+#             */
/*   Updated: 2021/12/12 17:55:47 by anatasha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

int		my_end(char *str);
char	*my_strjoin(char *s1, char *s2);
char	*my_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);
char	*del_start(char *piece);
char	*my_read(int fd, char *piece);
char	*my_line(char *piece);
size_t	ft_strlen( const char *str);
#endif