/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desausag <desausag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 13:47:56 by desausag          #+#    #+#             */
/*   Updated: 2020/12/06 17:19:58 by desausag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DESAUSAG_GET_NEXT_LINE_H
# define DESAUSAG_GET_NEXT_LINE_H

# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

char	*ft_strdup(const char *str);
char	*ft_strchr(const char *s, int c);
size_t		ft_strlen(const char *src);
void	*ft_memcpy(void *destination, const void *source, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *destination, const char *append, size_t size);
char 	*ft_strcpy(char *kuda, char *otkuda);

#endif
