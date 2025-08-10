/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 13:58:18 by mhidani           #+#    #+#             */
/*   Updated: 2025/08/10 14:01:18 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	i;
	size_t	strlen;
	char	*duplicated;

	if (!str)
		return (NULL);
	strlen = ft_strlen(str);
	duplicated = ft_calloc(sizeof(char), strlen + 1);
	if (!duplicated)
		return (NULL);
	i = 0;
	while (str[i])
	{
		duplicated[i] = str[i];
		i++;
	}
	return (duplicated);
}
