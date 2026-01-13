/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garakizt <garakizt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 13:20:34 by garakizt          #+#    #+#             */
/*   Updated: 2026/01/07 13:22:20 by garakizt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int i = 0;
    int len;
    int *range;

    if (end - start < 0)
        len = (start - end) + 1;
    else
        len = (end - start) + 1;
    range = (int *)malloc(len * sizeof(int));
    if (!range)
        return NULL;
    while (i < len)
    {
        if (end < start)
            range[i] = end++;
        else
            range[i] = end--;
        i++;
    }

    return range;
}
