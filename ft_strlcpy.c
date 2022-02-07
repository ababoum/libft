/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mababou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 22:22:37 by mababou           #+#    #+#             */
/*   Updated: 2021/11/27 17:26:07 by mababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	if (size < 0)
		size = ft_strlen(dest);
	while (src[i] && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
/*#include <libc.h>
int main()
{
	char dest1[] = "rrrrrr0000000000000000000";
	char dest2[] = "rrrrrr0000000000000000000";
	
	printf("%lu\n%s\n",ft_strlcpy(dest1, "lorem ipsum dolor sit amet", -1), dest1);
	printf("%lu\n%s\n",strlcpy(dest2, "lorem ipsum dolor sit amet", -1), dest2);
}*/
