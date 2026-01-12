/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garakizt <garakizt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 10:50:40 by garakizt          #+#    #+#             */
/*   Updated: 2026/01/12 11:50:15 by garakizt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stddef.h>

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{   
    while (begin_list)
    {
        if (begin_list != NULL)
        {
            if (begin_list->data != NULL)
                (*f)(begin_list->data);
            begin_list = begin_list->next;
        }
    }
}