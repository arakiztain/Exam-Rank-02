/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garakizt <garakizt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 13:06:07 by garakizt          #+#    #+#             */
/*   Updated: 2025/12/30 14:09:40 by garakizt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char   reverse_bits(unsigned char octet)
{
    unsigned int i;
    unsigned char res;

    i = 8;
    res = 0;
    while (i--)
    {
        res = (res << 1) | (octet & 1);
        octet = octet >> 1;
    }
    return (res);
}
