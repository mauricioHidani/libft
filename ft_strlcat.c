/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 12:52:58 by mhidani           #+#    #+#             */
/*   Updated: 2025/08/10 13:05:34 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_stop;

	if (!dst || !src)
		return (0);
	src_len = ft_strlen(src);
	dst_stop = ft_strlen(dst);
	if (dst_size == 0)
		return (src_len);
	if (dst_stop >= dst_size)
		return (dst_size + src_len);
	i = 0;
	while (src[i] && (dst_stop + i) < (dst_size - 1))
	{
		dst[dst_stop + i] = src[i];
		i++;
	}
	dst[dst_stop + i] = '\0';
	return (dst_stop + src_len);
}
