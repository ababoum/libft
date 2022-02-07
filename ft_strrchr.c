/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mababou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 22:24:42 by mababou           #+#    #+#             */
/*   Updated: 2021/11/27 17:08:09 by mababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*tmp;

	i = ft_strlen(str);
	c = (unsigned char)c;
	tmp = (char *)str;
	if (c == '\0')
		return (tmp + i);
	while (i >= 0)
	{
		if (str[i] == c)
			return (tmp + i);
		i--;
	}
	return (0);
}
