/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:06:32 by sguarien          #+#    #+#             */
/*   Updated: 2022/12/01 11:40:13 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

size_t	ft_strlen(const char *c);

char	*ft_strchr(const char *s, int c);
char	*ft_free_join(char *s1, char *s2);
char	*ft_new_line(char *s);
char	*ft_get_line(char *s);
char	*get_next_line(int fd);
char	*ft_read(int fd, char *str);

#endif