/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 13:06:29 by mhidani           #+#    #+#             */
/*   Updated: 2025/08/10 13:10:20 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, const int c)
{
	char	*pivot;

	if (!str)
		return (NULL);
	pivot = (char *)str;
	while (*pivot)
	{
		if (*pivot == (char)c)
			return (pivot);
		pivot++;
	}
	if (c == 0 && *pivot == c)
		return (pivot);
	return (NULL);
}
