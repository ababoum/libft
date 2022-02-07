/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mababou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:24:21 by mababou           #+#    #+#             */
/*   Updated: 2021/11/27 18:19:17 by mababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	new -> next = *alst;
	*alst = new;
}
/*#include <libc.h>
int main()
{
	t_list * l =  NULL;
		ft_lstadd_front(&l, ft_lstnew("1"));
		printf("%s\n", l->content);
		printf("%p\n", l->next);
}*/
/*#include <libc.h>
int main()
{
	t_list *list;
	list = ft_lstnew("ancien debut");
	
	t_list *new;
	new = ft_lstnew("nouveau debut");

	ft_lstadd_front(&list, new);
	
	t_list *tmp;
	tmp = new;
	
	while (tmp)
	{
		printf("%s\n", tmp -> content);
		tmp = tmp -> next;
	}
}*/
