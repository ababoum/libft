/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mababou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:48:39 by mababou           #+#    #+#             */
/*   Updated: 2021/11/27 12:32:10 by mababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp && tmp -> next)
	{
		tmp = (tmp -> next);
	}
	return (tmp);
}
/*#include <libc.h>
int main()
{
    t_list *list;
    list = ft_lstnew("fin");

    t_list *new1;
    new1 = ft_lstnew("milieu3");

    t_list *new2;
    new2 = ft_lstnew("milieu2");

    t_list *new3;
    new3 = ft_lstnew("milieu1");

    t_list *new4;
    new4 = ft_lstnew("nouveau debut");

    ft_lstadd_front(&list, new1);
    ft_lstadd_front(&new1, new2);
    ft_lstadd_front(&new2, new3);
    ft_lstadd_front(&new3, new4);

    t_list *tmp;
    tmp = new4;

    while (tmp)
    {
        printf("%s\n", tmp -> content);
        tmp = tmp -> next;
    }
        printf("the list has %d elements.\n", ft_lstsize(new4));
		printf("the last element is %s\n", ft_lstlast(new4) -> content);
}*/
