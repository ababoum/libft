/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mababou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 22:35:23 by mababou           #+#    #+#             */
/*   Updated: 2021/11/26 11:24:59 by mababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	size_t		i;
	const char	*tmp;

	tmp = src;
	i = 0;
	while (i < count)
	{
		ft_memset(dest + i, tmp[i], 1);
		i++;
	}
	return (dest);
}
