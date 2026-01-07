/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garakizt <garakizt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 10:56:58 by garakizt          #+#    #+#             */
/*   Updated: 2026/01/07 11:22:02 by garakizt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putnbr(int n)
{
    unsigned int    nb;
    
	if (n < 0)
	{
		ft_putchar('-');
		nb = -n;
	}
    nb = n;
	if (nb >= 10)
		ft_putnbr(nb / 10);
	write(1, &("0123456789"[nb % 10]), 1);
}

int is_prime(int nbr)
{
    if (nbr < 2)
        return (0);
    int i;

    i = 2;
    while (i <= nbr / 2)
    {
        if (nbr % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int ft_atoi(char *str)
{
    int s;
    int i;
    int r;
    
    i = 0;
    s = 1;
    r = 0;
    while (str[i] == ' ')
        i++;
    if (str[i] == '-' || str[i] == '+')
        if (str[i] == '-')
            s *= -1;
    while (str[i] >= '0' && str[i] <= '9' && str[i])
    {
        r = (r * 10) + str[i] - '0';
        i++;
    }
    return (r * s);
}

int main(int ac, char **av)
{
    if (ac != 2 || ft_atoi(av[1]) <= 0)
    {
        write(1, "0\n", 2);
        return (0);
    }
    int n = ft_atoi(av[1]);
    int sum = 0;
    while (n > 1)
    {
        if (is_prime(n))
            sum += n;
        n--;
    }
    ft_putnbr(sum);
    ft_putchar('\n');
}