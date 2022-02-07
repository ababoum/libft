/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mababou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:21:45 by mababou           #+#    #+#             */
/*   Updated: 2021/11/27 12:57:39 by mababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*tmp_next;

	tmp = *lst;
	while (tmp)
	{
		tmp_next = tmp -> next;
		ft_lstdelone(tmp, del);
		tmp = tmp_next;
	}
	*lst = NULL;
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
    new5 = ft_lstnew(ft_strdup("nouvelle fin"));

    ft_lstadd_back(&new4, new5);

    t_list *tmp;
    tmp = new4;

    ft_lstclear(&new4, supp_case);

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
	write(1, elem->content, strlen(elem->content));
}

static int	nb_free_done;

void	ft_del(void *content)
{
	free(content);
	nb_free_done++;
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
	elem->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;
	nb_free_done = 0;
	if (atoi(argv[1]) == 1)
	{
		ft_lstclear(&elem3, &ft_del);
		if (elem)
			ft_print_result(elem);
		else
			write(1, "NULL", 4);
		write(1, "\n", 1);
		if (elem2)
			ft_print_result(elem2);
		else
			write(1, "NULL", 4);
		write(1, "\n", 1);
		if (elem3)
			ft_print_result(elem3);
		else
			write(1, "NULL", 4);
		write(1, "\n", 1);
		if (elem4)
		{
			write(1, "nb_free_done = ", 15);
			nb_free_done += '0';
			write(1, &nb_free_done, 1);
		}
		else
			write(1, "NULL", 4);
	}
	return (0);
}*/
