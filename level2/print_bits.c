/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garakizt <garakizt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 12:24:30 by garakizt          #+#    #+#             */
/*   Updated: 2025/12/30 13:05:21 by garakizt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    print_bits(unsigned char octet)
{
    int i;
    unsigned char bit;

    i = 8;
    bit = 0;
    while (i--)
    {
        bit = (octet >> i & 1) + 48;
        write(1, &bit, 1);
    }
}
