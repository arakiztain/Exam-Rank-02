/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garakizt <garakizt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 13:03:12 by garakizt          #+#    #+#             */
/*   Updated: 2026/01/08 13:19:46 by garakizt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0, r = 0;
    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        r = (r * 10) + str[i] - '0';
        i++;
    }
    return (r);
}

void ft_putnbr(int nbr)
{
    if (nbr > 10)
        ft_putnbr(nbr / 10);
    write(1, &"0123456789"[nbr % 10], 1);
}

void    ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;       
    }
}

int main(int ac, char *av[])
{
    if (ac == 2)
    {
        int i = 1;
        int n = ft_atoi(av[1]);
        if (n >= 0)
        {
            while (i < 10)
            {
                ft_putnbr(i);
                ft_putstr(" x ");
                ft_putnbr(n);
                ft_putstr(" = ");
                ft_putnbr(i * n);
                write(1, "\n", 1);
                i++;
            }
        }
    }
    else
        write(1, "\n", 1);
    return (0);
}