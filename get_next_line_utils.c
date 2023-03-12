/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalvett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:32:18 by fsalvett          #+#    #+#             */
/*   Updated: 2022/12/15 18:32:19 by fsalvett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *str, char *buff)
{
	size_t	i;
	size_t	j;
	char	*new_str;

	i = 1;
	if (!str)
	{
		str = (char *)malloc(1 * sizeof(*str));
		str[0] = '\0';
	}
	j = ft_strlen(str) + ft_strlen(buff);
	if (!str || !buff)
		return (NULL);
	new_str = malloc((j + 1) * sizeof(*new_str));
	if (!new_str)
		return (NULL);
	if (str)
		while (*str != '\0' && i++)
			*(new_str++) = *(str++);
	while (*buff != '\0')
		*(new_str++) = *(buff++);
	*new_str = '\0';
	str -= (i - 1);
	free(str);
	return (new_str - j);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	if (!s)
		return (0);
	while (*s != (char)c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}
