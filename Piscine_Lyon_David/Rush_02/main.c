/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:14:56 by cefuente          #+#    #+#             */
/*   Updated: 2023/10/01 16:40:56 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

int	main(int argc, char **argv)
{
	char	*index;

	if (invalid_input(argc, argv))
		return (-1);
	else if (argc == 2)
	{
		index = argv[argc - 1];
		init_output(index);
	}
	else if (argc == 3)
		init_input(argv[argc - 2], argv[argc - 1]);
	else
		return (0);
	return (0);
}
