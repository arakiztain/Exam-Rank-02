/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakiztain <arakiztain@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 12:37:20 by arakiztain        #+#    #+#             */
/*   Updated: 2025/12/18 12:47:27 by arakiztain       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int	i;

		i = 0;
		while (argv[1][i])
		{
			if ((argv[1][i] >= 65 && argv[1][i] <= 77) || (argv[1][i] >= 97 && argv[1][i] <= 109))
				argv[1][i] += 13;
			else if ((argv[1][i] >= 78 && argv[1][i] <= 90) || (argv[1][i] >= 110 && argv[1][i] <= 122))
				argv[1][i] -= 13;
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}