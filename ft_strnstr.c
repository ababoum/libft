/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mababou <mababou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 22:27:04 by mababou           #+#    #+#             */
/*   Updated: 2021/11/30 19:03:22 by mababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	i;

	i = 0;
	if ((len == 0 && *substr) || len < ft_strlen(substr))
		return (0);
	if (ft_strlen(substr) == 0 && *str)
		return ((char *)str);
	while (str[i] && i + ft_strlen(substr) <= len)
	{
		if (ft_strncmp(str + i, substr, ft_strlen(substr)) == 0)
			return ((char *)str + i);
		i++;
	}
	if (((i == ft_strlen(str) || i == len - ft_strlen(substr) + 1) && \
		ft_strlen(str) != 0) || (i == ft_strlen(str) && ft_strlen(substr) != 0))
		return (0);
	return ((char *)str + i);
}
/*#include <libc.h>
int main()
{
		printf("1\n");
		printf("%s\n", ft_strnstr("", "", 0));
		printf("%s\n", strnstr("", "", 0));
		printf("2\n");
		printf("%s\n", ft_strnstr("salut", "", 0));
		printf("%s\n", strnstr("salut", "", 0));
		printf("3\n");
		printf("%s\n", ft_strnstr("salut", "bg", 0));
		printf("%s\n", strnstr("salut", "bg", 0));
		printf("4\n");
		printf("%s\n", ft_strnstr("salut", "lu", 0));
		printf("%s\n", strnstr("salut", "lu", 0));
		printf("5\n");
		printf("%s\n", ft_strnstr("", "salut", 0));
		printf("%s\n", strnstr("", "salut", 0));
		printf("6\n");
		printf("%s\n", ft_strnstr("", "", 5));
		printf("%s\n", strnstr("", "", 5));
		printf("7\n");
		printf("%s\n", ft_strnstr("salut", "", 5));
		printf("%s\n", strnstr("salut", "", 5));
		printf("8\n");
		printf("%s\n", ft_strnstr("", "salut", 5));
		printf("%s\n", strnstr("", "salut", 5));
		printf("9\n");
		printf("%s\n", ft_strnstr("salut", "t", 4));
		printf("%s\n", strnstr("salut", "t", 4));
		printf("10\n");
		printf("%s\n", ft_strnstr("salut", "t", 5));
		printf("%s\n", strnstr("salut", "t", 5));
		printf("11\n");
		printf("%s\n", ft_strnstr("salut", "salut", 3));
		printf("%s\n", strnstr("salut", "salut", 3));
		printf("12\n");
		printf("%s\n", ft_strnstr("salut", "salut", 5));
		printf("%s\n", strnstr("salut", "salut", 5));
		printf("13\n");
		printf("%s\n", ft_strnstr("", "salut", 4));
		printf("%s\n", strnstr("", "salut", 4));
}*/
