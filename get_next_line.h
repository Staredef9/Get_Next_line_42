/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalvett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:32:08 by fsalvett          #+#    #+#             */
/*   Updated: 2022/12/15 18:32:11 by fsalvett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include   <stdio.h>
# include   <stdlib.h>
# include   <stddef.h>
# include   <sys/types.h>
# include   <sys/stat.h>
# include   <fcntl.h>
# include   <unistd.h>

char	*get_next_line(int fd);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *str, char *buff);
size_t	ft_strlen(const char *s);
#endif
