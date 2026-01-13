/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garakizt <garakizt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 12:45:49 by garakizt          #+#    #+#             */
/*   Updated: 2026/01/07 12:59:34 by garakizt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nbr_inbase(char c, int base)
{
	if (base <= 10)
		return (c >= '0' && c <= '9');
	return ((c >= '0' && c <= '9') || (c >= 'A' && c <= ('A' + base - 10)) || (c >= 'a' && c <= ('a' + base - 10)));
}

int		ft_atoi_base(const char *str, int base)
{
	int		i;
	int		nbr;
	int		sign;

	if (!str[0] || (base < 2 || base > 16))
		return (0);
	i = 0;
    nbr = 0;
	sign = 1;
	while (str[i] >= 9 && str[i] <= 13)
		i += 1;
	while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign *= -1;
    }
	while (str[i] && nbr_inbase(str[i], base))
	{
		if (str[i] >= 'A' && str[i] <= 'F')
			nbr = (nbr * base) + (str[i] - 'A' + 10);
		else if (str[i] >= 'a' && str[i] <= 'f')
			nbr = (nbr * base) + (str[i] - 'a' + 10);
		else
			nbr = (nbr * base) + (str[i] - '0');
		i += 1;
	}
	return (nbr * sign);
}