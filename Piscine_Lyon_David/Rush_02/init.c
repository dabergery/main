/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 22:04:18 by cefuente          #+#    #+#             */
/*   Updated: 2023/10/01 22:43:13 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	init_output(char *index)
{
	char	dic[1000];
	char	**trio;
	char	**order;
	int		op;

	trio = ft_init_trio(index);
	order = ft_init_order(index);
	op = open("numbers.dict", O_RDONLY);
	if (!op)
		return (-1);
	read(op, &dic, 1000);
	if (ft_atoi(index) < 20 && ft_strstr(dic, index))
		print_number(ft_strstr(dic, index));
	else
		ft_shatter_n_as_str(index, trio, order, dic);
	free(trio);
	free(order);
	close(op);
	return (0);
}

int	init_input(char *ref, char *value)
{
	int	op;
	int	i;

	op = open("numbers.dict", O_WRONLY | O_APPEND | O_EXCL);
	if (!op)
		return (-1);
	i = 0;
	write(op, ref, ft_strlen(ref));
	write(op, ": ", 2);
	write(op, value, ft_strlen(value));
	write(op, "\n", 1);
	close(op);
	return (0);
}
