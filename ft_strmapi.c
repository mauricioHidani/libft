/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 13:33:05 by mhidani           #+#    #+#             */
/*   Updated: 2025/08/10 14:01:28 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*newstr;

	if (!str || !f)
		return (NULL);
	i = 0;
	newstr = ft_strdup(str);
	while (newstr[i])
	{
		newstr[i] = f(i, newstr[i]);
		i++;
	}
	return (newstr);
}
