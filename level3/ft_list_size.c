/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garakizt <garakizt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 13:04:05 by garakizt          #+#    #+#             */
/*   Updated: 2026/01/07 13:05:31 by garakizt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int ft_lsit_size(t_list *begin_list)
{
    int count;
    t_list *current;

    count = 0;
    current = begin_list;
    while (current)
    {
        count++;
        current = current->next;
    }
    return (count);
}