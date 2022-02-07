/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mababou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 22:34:15 by mababou           #+#    #+#             */
/*   Updated: 2021/11/24 23:15:20 by mababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *ptr, int val, size_t count)
{
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = ptr;
	while (i < count)
		tmp[i++] = val;
	return (ptr);
}
