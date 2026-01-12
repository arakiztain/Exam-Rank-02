/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garakizt <garakizt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 11:34:03 by garakizt          #+#    #+#             */
/*   Updated: 2026/01/08 12:13:42 by garakizt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int    ft_atoi(char *str)
{
    unsigned int i = 0, r = 0;
    
    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        r = (r * 10) + str[i] - '0';
        i++;
    }
    return (r);
}

void put_hex(int nbr)
{
    char *base = "0123456789abcdef";
    
    if (nbr >= 16)
        put_hex (nbr / 16);
    write(1, &base[nbr % 16], 1);
}

int main(int ac, char *av[])
{
    if (ac == 2)
        put_hex(ft_atoi(av[1]));
    write(1, "\n", 1);
    return (0);
}