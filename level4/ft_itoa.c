/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garakizt <garakizt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 11:51:43 by garakizt          #+#    #+#             */
/*   Updated: 2026/01/12 12:09:52 by garakizt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

int nbrlen(int nbr)
{
    int i = 0;
    
    while (nbr != 0)
    {
        nbr /= 10;
        i++;
    }
    return (i);
}

char    *ft_itoa(int nbr)
{
    long   n = nbr;
    int len;
    char *r;

    if (n < 0)
        len = nbrlen(-n) + 1;
    else
        len = nbrlen(n);
    r = (char *)malloc((len + 1) * sizeof(char));
    if (!r)
        return (NULL);
    r[len] = '\0';
    if (n == 0)
        return (r[0] = '0', r[1] = '\0', r);
    else if (n < 0)
    {
        r[0] = '-';
        n = -n;
    }
    len--;
    while (n != 0)
    {
        r[len] = (n % 10) + '0';
        n /= 10;
        len --;
    }
    return (r);
}
