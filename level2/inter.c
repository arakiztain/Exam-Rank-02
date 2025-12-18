/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakiztain <arakiztain@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 14:37:30 by arakiztain        #+#    #+#             */
/*   Updated: 2025/12/18 14:56:07 by arakiztain       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	if_str(char c, const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char *av[])
{
	if (ac == 3)
	{
		int		i;
		int		j;
		char 	r[256];

		i = 0;
		j = 0;
		r[0] = '\0';
		while (av[1][i])
		{
			if (if_str(av[1][i], av[2]) && !(if_str(av[1][i], r)))
			{
				write(1, &av[1][i], 1);
				r[j] = av[1][i];
				j++;
				r[j] = '\0';
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
