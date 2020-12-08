/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desausag <desausag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 13:47:56 by desausag          #+#    #+#             */
/*   Updated: 2020/12/08 15:11:38 by desausag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 25
# endif

char		*ft_strdup(const char *str);
char		*ft_strchr(const char *s, int c);
size_t		ft_strlen(const char *src);
void		*ft_memcpy(void *destination, const void *source, size_t n);
char		*ft_strjoin(char const *s1, char const *s2);
char		*rd_reminder(char **line, char *reminder);

#endif
