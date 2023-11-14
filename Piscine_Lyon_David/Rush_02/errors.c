/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:48:46 by cefuente          #+#    #+#             */
/*   Updated: 2023/10/01 09:06:39 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	invalid_input(int argc, char **argv)
{
	int	nb;

	if (argc <= 1)
	{
		write(1, "No arguments provided\n", 22);
		return (1);
	}
	nb = ft_atoi(argv[1]);
	if (nb < 0)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	else
		return (0);
}
