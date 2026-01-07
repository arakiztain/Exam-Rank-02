/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garakizt <garakizt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 10:38:02 by garakizt          #+#    #+#             */
/*   Updated: 2026/01/07 10:48:04 by garakizt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int if_str(char *str, char c)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

int main(int ac, char *av[])
{
    if (ac == 3)
    {
        int i;
        int j;
        char list[100];
        
        i = 0;
        j = 0;
        while (av[1][i])
        {
            if (!if_str(list, av[1][i]))
            {
                write(1, &av[1][i], 1);
                list[j] = av[1][i];
                j++;
            }
            i++;
        }
        i = 0;
        while (av[2][i])
        {
            if (!if_str(list, av[2][i]))
            {
                write(1, &av[2][i], 1);
                list[j] = av[2][i];
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}