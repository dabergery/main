/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantony <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 22:08:36 by aantony           #+#    #+#             */
/*   Updated: 2023/10/01 22:33:31 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	**ft_init_order(char *n)
{
	int		i;
	int		pow;
	char	**temp;

	pow = ft_strlen(n) / 3;
	temp = malloc((pow + 1 + 1) * sizeof(char *));
	i = 0;
	while (i < (pow + 1))
	{
		temp[i] = malloc((3 * pow + 2) * sizeof(char));
		i++;
	}
	return (temp);
}

int	fill_order(char **order, int line, int power)
{
	power--;
	order[line] = give_str_power(power);
	return (power);
}
