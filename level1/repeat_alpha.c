/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakiztain <arakiztain@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 12:07:29 by arakiztain        #+#    #+#             */
/*   Updated: 2025/12/18 12:32:00 by arakiztain       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	abc_index(char c)
{
	int	i;
	char	*abc;
	char	*ABC;

	i = 1;
	abc = "abcdefghijklmnopqrstuvwxyz";
	ABC = "ABCDEFGHIJKLMNOPKRSTUVWXYZ";
	while (abc[i])
	{
		if (abc[i] == c)
			return (i);
		else if (ABC[i] == c)
			return (i);
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int	i;
		int j;

		i = 0;
		while (argv[1][i])
		{
			j = 0;
			if (abc_index(argv[1][i]) > 0)
			{
				j = abc_index(argv[1][i]);
				while (j >= 0)
				{
					write(1, &argv[1][i], 1);
					j--;
				}	
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}