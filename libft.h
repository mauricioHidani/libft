/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 12:26:50 by mhidani           #+#    #+#             */
/*   Updated: 2025/08/10 14:08:35 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef unsigned char	t_byte;

/* Manipulate Strings ------------------------------------------------------- */
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size);
size_t	ft_strlcat(char *dst, const char *src, size_t dst_size);
char	*ft_strchr(const char *str, const int c);
char	*ft_strrchr(const char *str, const int c);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strmapi(char const *str, char (*f)(unsigned int, char));
char	*ft_strnstr(const char *big, const char *little, size_t n);

/* Manipulate Memory -------------------------------------------------------- */
void	*ft_calloc(size_t memsize, size_t length);
char	*ft_strdup(const char *src);

#endif
