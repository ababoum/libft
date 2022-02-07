/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mababou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:33:38 by mababou           #+#    #+#             */
/*   Updated: 2021/11/27 17:59:38 by mababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		len;
	t_list	*tmp;

	len = 0;
	tmp = lst;
	while (tmp)
	{
		len++;
		tmp = tmp -> next;
	}
	return (len);
}
/*#include <libc.h>
int main()
{
	t_list * l =  NULL;
	ft_lstadd_front(&l, ft_lstnew((void*)1));
	printf("%d\n", ft_lstsize(l));
}*/
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
}*/
