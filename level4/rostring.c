/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garakizt <garakizt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 13:21:32 by garakizt          #+#    #+#             */
/*   Updated: 2026/01/12 13:44:04 by garakizt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	rostring(char *str)
{
	int	i;
	int	j;

	i = 0;
	while ((str[i] && str[i] == ' ') || str[i] == '\t')
		i++;
	j = i;
	while (str[i])
	{
		while (str[i] && str[i] != ' ' && str[i] != '\t')
			i++;
		while (str[i] && (str[i] == ' ' || str[i] == '\t'))
			i++;
		while ((str[i] && (str[i] != ' ' && str[i] != '\t')) && (str[i
				- 1] == ' ' || str[i - 1] == '\t'))
		{
			while (str[i] && (str[i] != ' ' && str[i] != '\t'))
			{
				write(1, &str[i], 1);
				i++;
			}
			write(1, " ", 1);
			i++;
		}
	}
	while (str[j] && (str[j] != ' ' && str[j] != '\t'))
	{
		write(1, &str[j], 1);
		j++;
	}
}
