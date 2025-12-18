/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakiztain <arakiztain@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 12:32:35 by arakiztain        #+#    #+#             */
/*   Updated: 2025/12/18 12:36:35 by arakiztain       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int	len;

		len = ft_strlen(argv[1]);
		len--;
		while (argv[1][len])
		{
			write(1, &argv[1][len], 1);
			len--;		
		}
	}
	write(1, "\n", 1);
	return (0);
}