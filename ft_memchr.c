/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mababou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 22:36:18 by mababou           #+#    #+#             */
/*   Updated: 2021/11/30 18:56:41 by mababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *block, int c, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = (unsigned char *)block;
	c = (unsigned char)c;
	while (i < size)
	{
		if (tmp[i] == c)
			return ((void *)&tmp[i]);
		i++;
	}
	return (NULL);
}
