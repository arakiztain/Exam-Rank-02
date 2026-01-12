/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garakizt <garakizt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 12:56:21 by garakizt          #+#    #+#             */
/*   Updated: 2026/01/12 13:20:09 by garakizt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int	main(int ac, char **av)
{
	int i;
	int j;
	int first_word;

	i = 0;
	first_word = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
			i++;
		i--;
		while (i >= 0)
		{
			while (i >= 0 && (av[1][i] == ' ' || av[1][i] == '\t'))
				i--;
			j = i;
			while (j >= 0 && av[1][j] != ' ' && av[1][j] != '\t')
				j--;
			if (first_word)
				write(1, " ", 1);
			write(1, &av[1][j + 1], i - j);
			first_word = 1;
			i = j;
		}
	}
	write(1, "\n", 1);
	return (0);
}