/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_parsing_bis.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 22:03:15 by cefuente          #+#    #+#             */
/*   Updated: 2023/10/01 22:42:53 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

void	print_number(char *dic)
{
	int	len;
	int	start;
	int	i;

	i = 0;
	len = 0;
	while ((dic[i] >= '0' && dic[i] <= '9')
		|| (dic[i] == ' ')
		|| (dic[i] == ':'))
		i++;
	start = i;
	while (dic[i++] != '\n')
		len++;
	write(1, &dic[start], len);
}

int	sub_thousand(char *dic, char **trio, char **order)
{
	int	i;

	i = 0;
	while (trio[i])
	{
		if (trio[i][2] && trio[i][0] != '0')
			print_trio(trio[i], dic);
		else if ((!trio[i][2] && trio[i][1])
			|| (trio[i][0] == '0' && trio[i][1] != '0'))
			print_duo(trio[i], dic);
		else if ((!trio[i][2] && !trio[i][1])
				|| (trio[i][1] == '0' && trio[i][2] != '0'))
			print_uno(trio[i], dic);
		if (trio[i + 1])
		{
			print_number(ft_strstr(dic, order[i]));
			write(1, " ", 1);
		}
		else if (!trio[i])
			return (0);
		i++;
	}
	return (0);
}
