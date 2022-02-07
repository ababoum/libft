/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mababou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:54:45 by mababou           #+#    #+#             */
/*   Updated: 2021/11/27 18:31:27 by mababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*last;

	if (*alst)
	{
		last = ft_lstlast(*alst);
		(last->next) = new;
	}
	else if (*alst == NULL)
		*alst = new;
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
    new4 = ft_lstnew("debut");

    ft_lstadd_front(&list, new1);
    ft_lstadd_front(&new1, new2);
    ft_lstadd_front(&new2, new3);
    ft_lstadd_front(&new3, new4);

	ft_lstadd_back(&new4, ft_lstnew("nouvelle fin"));

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
/*#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void	ft_print_result(t_list *elem)
{
	int		len;

	len = 0;
	while (((char *)elem->content)[len])
		len++;
	write(1, elem->content, len);
	write(1, "\n", 1);
}
t_list	*ft_lstnewone(void *content)
{
	t_list	*elem;
	elem = (t_list *)malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	if (!content)
		elem->content = NULL;
	else
		elem->content = content;
	elem->next = NULL;
	return (elem);
}

int main(int argc, const char *argv[])
{
	t_list		*begin;
	t_list		*elem;
	t_list		*elem2;
	t_list		*elem3;
	t_list		*elem4;
	char		*str = strdup("lorem");
	char		*str2 = strdup("ipsum");
	char		*str3 = strdup("dolor");
	char		*str4 = strdup("sit");

	elem = ft_lstnewone(str);
	elem2 = ft_lstnewone(str2);
	elem3 = ft_lstnewone(str3);
	elem4 = ft_lstnewone(str4);
	alarm(5);
	if (argc == 1 || !elem || !elem2 || !elem3 || !elem4)
		return (0);
	else if (atoi(argv[1]) == 1)
	{
		begin = NULL;
		ft_lstadd_back(&begin, elem);
		ft_lstadd_back(&begin, elem2);
		ft_lstadd_back(&begin, elem3);
		ft_lstadd_back(&begin, elem4);
		while (begin)
		{
			ft_print_result(begin);
			begin = begin->next;
		}
	}
	return (0);
}*/
