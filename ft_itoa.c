/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mababou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:14:59 by mababou           #+#    #+#             */
/*   Updated: 2021/11/26 15:15:15 by mababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	nb_len(long int n)
{
	if (n >= 0 && n <= 9)
		return (1);
	else
		return (1 + nb_len(n / 10));
}

char	*ft_itoa(int n)
{
	int				sign;
	unsigned int	nb;
	char			*output;
	int				i;

	sign = 0;
	if (n < 0)
		sign = 1;
	nb = (1 - 2 * sign) * n;
	i = nb_len(nb) - 1 + sign;
	output = malloc(i + 2);
	if (!output)
		return (NULL);
	if (sign == 1)
		output[0] = '-';
	output[i + 1] = '\0';
	while (i >= sign)
	{
		output[i--] = (nb % 10) + 48;
		nb = nb / 10;
	}
	return (output);
}
/*#include <libc.h>
int main(int ac, char **av)
{
	if (ac > 0)
	{
		printf("%s\n", ft_itoa(atoi(av[1])));
	}
}*/
