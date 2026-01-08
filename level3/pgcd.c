/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garakizt <garakizt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 10:47:29 by garakizt          #+#    #+#             */
/*   Updated: 2026/01/08 10:56:21 by garakizt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int main(int ac, char *av[])
{
    if (ac == 3)
    {
        int number1 = atoi(av[1]);
        int number2 = atoi(av[2]);
        
        if (number1 > 0 && number2 > 0)
        {
            while (number1 != number2)
            {
                if (number1 > number2)
                    number1 = number1 - number2;
                else
                    number2 = number2 - number1;
            }
            printf("%d", number1);
        }
    }
    printf("\n");
    return (0);
}
