/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garakizt <garakizt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 14:16:20 by garakizt          #+#    #+#             */
/*   Updated: 2026/01/08 14:33:31 by garakizt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int main(int ac, char *av[])
{
    int i, num;

    i = 2;
    if (ac == 2)
    {
        num = atoi(av[1]);
        if (num == 1)
            printf("1");
        while (i <= num)
        {
            if (num % i == 0)
            {
                printf("%d", i);
                if (num != i)
                    printf("*");
                num = num / i;
            }
            else
                i++;
        }
    }
    printf("\n");
    return (0);
}