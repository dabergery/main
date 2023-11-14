/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shatter_n.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantony <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:21:43 by aantony           #+#    #+#             */
/*   Updated: 2023/10/01 22:49:56 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*give_str_power(int power)
{
	char	*dest;
	int		size;
	int		i;

	size = (3 * power) + 1;
	dest = malloc(size * sizeof(char));
	dest[0] = '1';
	i = 1;
	while (i < size)
	{
		dest[i] = '0';
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_shatter_n_as_str(char *str_n, char **trio, char **order, char *dic)
{
	int	i;
	int	line;
	int	pow;

	i = 0;
	line = 0;
	pow = ft_strlen(str_n) / 3;
	while (str_n[i] != '\0' && str_n[i] >= '0' && str_n[i] <= '9')
	{
		if (i == 0 && (ft_strlen(str_n) % 3) == 1)
		{
			order[line] = give_str_power(pow);
			first_elements_trio(trio, line, str_n, 0);
			line++;
			i = 1;
		}
		if (i % 3 == 0 && (ft_strlen(str_n) % 3) == 1)
		{
			fill_trio(trio, line, str_n, i - 2);
			pow = fill_order(order, line, pow);
			line++;
		}
		if (i == 0 && (ft_strlen(str_n) % 3) == 2)
		{
			order[line] = give_str_power(pow);
			first_elements_trio(trio, line, str_n, 1);
			line++;
			i = 2;
		}
		if ((i > 2 && ((i - 2) % 3 == 0) && (ft_strlen(str_n) % 3) == 2)
			|| (i % 3 == 0 && (ft_strlen(str_n) % 3) == 0))
		{
			fill_trio(trio, line, str_n, i);
			pow = fill_order(order, line, pow);
			line++;
		}
	}
	order[line] = 0;
	trio[line] = 0;
	sub_thousand(dic, trio, order);
}
