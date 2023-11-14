/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_parsing.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 08:55:13 by cefuente          #+#    #+#             */
/*   Updated: 2023/10/01 22:45:56 by cefuente         ###   ########.fr       */
/*   Updated: 2023/10/01 22:18:44 by aantony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

void	print_trio(char *trio, char *dic)
{
	print_number(ft_strch(dic, trio[0]));
	write(1, " ", 1);
	print_number(ft_strstr(dic, "100"));
	write(1, " ", 1);
	if (trio[1] == '0' && trio[2] != '0')
	{
		print_number(ft_strch(dic, trio[2]));
		write(1, " ", 1);
	}
	else
		print_trio_bis(trio, dic);
}

void	print_trio_bis(char *trio, char *dic)
{
	char	tens[10];

	if (trio[1] != '0' && trio[2] != '0')
	{
		ft_chcat(tens, trio[1]);
		ft_chcat(tens, '0');
		print_number(ft_strstr(dic, tens));
		write(1, " ", 1);
		print_number(ft_strch(dic, trio[2]));
		write(1, " ", 1);
	}
	else if (trio[1] != '0' && trio[2] == '0')
	{
		ft_chcat(tens, trio[1]);
		ft_chcat(tens, '0');
		print_number(ft_strstr(dic, tens));
		write(1, " ", 1);
	}
}

void	print_duo(char *trio, char *dic)
{
	char	tens[10];

	if (trio[0] == '0')
	{
		ft_chcat(tens, trio[1]);
		ft_chcat(tens, trio[2]);
		print_number(ft_strstr(dic, tens));
		write(1, " ", 1);
	}
	else if (trio[0] != '0' && trio[1] != '0')
	{
		ft_chcat(tens, trio[0]);
		ft_chcat(tens, '0');
		print_number(ft_strstr(dic, tens));
		write(1, " ", 1);
		print_number(ft_strch(dic, trio[1]));
		write(1, " ", 1);
	}
	else if (trio[0] != '0' && trio[1] == '0')
	{
		ft_chcat(tens, trio[0]);
		ft_chcat(tens, '0');
		print_number(ft_strstr(dic, tens));
		write(1, " ", 1);
	}
}

void	print_uno(char *trio, char *dic)
{
	if (trio[0] != '0')
		print_number(ft_strch(dic, trio[0]));
	if (trio[0] == '0' && trio[1] == '0' && trio[2] != '0')
		print_number(ft_strch(dic, trio[2]));
	write(1, " ", 1);
}
