/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 12:23:05 by mhidani           #+#    #+#             */
/*   Updated: 2025/08/10 12:33:27 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t memsize, size_t length)
{
	size_t	i;
	t_byte	*allocated;

	if (!memsize || !length)
		return (malloc(1));
	if (length > 0 && memsize > ((size_t) - 1 / length))
		return (malloc(1));
	allocated = malloc(memsize * length);
	if (!allocated)
		return (NULL);
	i = 0;
	while (i < (memsize * length))
		allocated[i++] = 0;
	return (allocated);
}
