/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garakizt <garakizt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 12:14:32 by garakizt          #+#    #+#             */
/*   Updated: 2026/01/08 12:49:30 by garakizt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_isspace(char c)
{
    if (c <= 32)
        return (1);
    return (0);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    capitalizer(char *str)
{
    int i = 0;
    
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if (str[i] >= 'a' && str[i] <= 'z' && ft_isspace(str[i + 1]))
            str[i] -= 32;
        ft_putchar(str[i]);
        i++;
    }
}

int main(int ac, char *av[])
{
    int i = 1;
    if (ac > 1)
    {
        while (i < ac)
        {
            capitalizer(av[i]);
            i++;
            ft_putchar('\n');
        }
    }
    else
        ft_putchar('\n');
    return (0);
}