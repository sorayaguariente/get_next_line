/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:17:23 by sguarien          #+#    #+#             */
/*   Updated: 2022/12/02 15:28:19 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef OPEN_MAX
#  define OPEN_MAX 4096
# endif

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4000
# endif

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

char	*get_next_line(int fd);
char	*ft_read(int fd, char *str);
size_t	ft_strlen(const char *c);
char	*ft_strchr(const char *s, int c);
char	*ft_free_join(char *s, char *buffer);
char	*ft_get_line(char *s);
char	*ft_new_line(char *s);

#endif
