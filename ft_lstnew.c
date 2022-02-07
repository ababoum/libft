/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mababou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:14:30 by mababou           #+#    #+#             */
/*   Updated: 2021/11/27 12:31:54 by mababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (!list)
		return (0);
	list -> content = content;
	list -> next = NULL;
	return (list);
}
/*#include <libc.h>
int main(int ac, char **av)
{
	if (ac > 0)
	{
		t_list	list;
		list = *ft_lstnew(av[1]);
		printf("%s\n", list.content);
	}
}*/
