/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mababou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:08:08 by mababou           #+#    #+#             */
/*   Updated: 2021/11/27 12:32:02 by mababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst -> content);
	free(lst);
}
/*#include <libc.h>
static void supp_case(void *str)
{
	free(str);
}
int main()
{
    t_list *list;
    list = ft_lstnew(ft_strdup("fin"));

    t_list *new1;
    new1 = ft_lstnew(ft_strdup("milieu3"));

    t_list *new2;
    new2 = ft_lstnew(ft_strdup("milieu2"));

    t_list *new3;
    new3 = ft_lstnew(ft_strdup("milieu1"));

    t_list *new4;
    new4 = ft_lstnew(ft_strdup("debut"));

    ft_lstadd_front(&list, new1);
    ft_lstadd_front(&new1, new2);
    ft_lstadd_front(&new2, new3);
    ft_lstadd_front(&new3, new4);

    t_list *new5;
    new5 = ft_lstnew("nouvelle fin");

    ft_lstadd_back(&new4, new5);

    t_list *tmp;
    tmp = new4;
	
	ft_lstdelone(new3, supp_case);

    while (tmp)
    {
        printf("%s\n", tmp -> content);
        tmp = tmp -> next;
    }
        printf("the list has %d elements.\n", ft_lstsize(new4));
        printf("the last element is %s\n", ft_lstlast(new4) -> content);
}*/
