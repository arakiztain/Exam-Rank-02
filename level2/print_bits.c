/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garakizt <garakizt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 12:24:30 by garakizt          #+#    #+#             */
/*   Updated: 2026/01/13 11:30:03 by garakizt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    print_bits(unsigned char octet)
{
    int i = 7;
    char bit;
    
    while (i >= 0)
    {
        if ((octet >> i) & 1)
            bit = '1';
        else
            bit = '0';
        write(1, &bit, 1);
        i--;
    }
}
