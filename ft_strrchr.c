/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 13:11:19 by mhidani           #+#    #+#             */
/*   Updated: 2025/08/10 13:14:37 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, const int c)
{
	char	*found;
	char	*pivot;

	if (!str)
		return (NULL);
	found = NULL;
	pivot = (char *)str;
	while (*pivot)
	{
		if (*pivot == (char)c)
			found = pivot;
		pivot++;
	}
	if (c == 0 && *pivot == c)
		found = pivot;
	return (found);
}
