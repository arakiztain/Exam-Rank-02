/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garakizt <garakizt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 12:10:39 by garakizt          #+#    #+#             */
/*   Updated: 2026/01/12 12:34:38 by garakizt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stddef.h>

t_list  *sort_list(t_list *lst, int (*cmp)(int, int))
{
    int tmp;
    t_list  *head;

    head = lst;
    while (lst != NULL && lst-> next != NULL)
    {
        if ((*cmp)(lst->data, lst->next->data) == 0)
        {
            tmp = lst->data;
            lst->data = lst->next->data;
            lst->next->data = tmp;
            lst = head;
        }
        else
            lst = lst->next;
    }
    return (head);
}