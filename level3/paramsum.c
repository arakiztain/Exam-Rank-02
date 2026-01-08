/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garakizt <garakizt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 14:00:20 by garakizt          #+#    #+#             */
/*   Updated: 2026/01/07 14:04:10 by garakizt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nbr)
{
    if (nbr >= 10)
        ft_putnbr(nbr / 10);
    char c = nbr % 10 + '0';
    write(1, &c, 1);
}

int main(int ac, char *av[])
{
    (void)av[1];
    if (ac == 1)
        write(1, "0", 1);
    else
    {
        ac -= 1;
        ft_putnbr(ac);
    }
    write(1, "\n", 1);
}