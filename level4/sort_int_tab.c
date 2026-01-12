/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garakizt <garakizt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 12:35:11 by garakizt          #+#    #+#             */
/*   Updated: 2026/01/12 12:39:07 by garakizt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    sort_int_tab(int *tab, unsigned int size)
{
    int tmp;
    unsigned int    i = 0, j;

    while (i < size - 1)
    {
        j = i;
        while (j < size)
        {
            if (tab[i] > tab[j])
            {
                tmp = tab[i];
                tab[i] =  tab[j];
                tab[j] =  tmp;
            }
            j++;
        }
        i++;
    }
}