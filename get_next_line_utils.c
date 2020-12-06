/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desausag <desausag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 13:46:59 by desausag          #+#    #+#             */
/*   Updated: 2020/12/04 15:00:58 by desausag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlcat(char *destination, const char *append, size_t size)
{
	size_t	dst_size;
	size_t	n;

	dst_size = 0;
	while (destination[dst_size] != '\0' && dst_size < size)
		dst_size++;
	if (dst_size == size)
		return (size + ft_strlen(append));
	n = dst_size;
	while (n < size - 1 && append[n - dst_size] != '\0')
	{
		destination[n] = append[n - dst_size];
		n++;
	}
	destination[n] = '\0';
	return (dst_size + ft_strlen(append));
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1) + ft_strlen(s2) + 1;
	ret = (char *)malloc(sizeof(char) * i);
	if (!ret)
		return (NULL);
	ft_strlcat(ret, s1, i);
	ft_strlcat(ret, s2, i);
	return (ret);
}
char	*ft_strdup(const char *str)
{
	int		i;
	char	*p;

	i = ft_strlen(str) + 1;
	p = (char*)malloc(sizeof(char) * (i));
	if (p == NULL)
		return (NULL);
	ft_memcpy(p, str, i);
	return (p);
}
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}

size_t		ft_strlen(const char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}
void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	unsigned char	*dest;
	unsigned char	*sour;
	size_t			i;

	i = 0;
	dest = (unsigned char*)destination;
	sour = (unsigned char*)source;
	while (i != n)
	{
		dest[i] = sour[i];
		i++;
	}
	return (destination);
}
char 	*ft_strcpy(char *kuda, char *otkuda)
{
	size_t i;

	i = 0;
	if (!otkuda || !kuda)
		return (NULL);
	if (otkuda - kuda < 0)
		return (NULL);
	while (otkuda[i] != '\0')
	{
		kuda[i] = otkuda[i];
		i++;
	}
	kuda[i] = '\0';
	return (kuda);
}



