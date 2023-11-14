/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trio.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantony <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 22:06:46 by aantony           #+#    #+#             */
/*   Updated: 2023/10/01 22:33:59 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	fill_trio(char **trio, int line, char *str, int ct_i)
{
	int	j;

	j = 0;
	while (j < 3)
	{
		trio[line][j] = str[ct_i + j];
		j++;
	}
}

void	first_elements_trio(char **trio, int line, char *str, int limit)
{
	int	i;

	i = 0;
	while (i <= limit)
	{
		trio[line][i] = str[i];
		i++;
	}
}

char	**ft_init_trio(char *n)
{
	int		pow;
	int		i;
	char	**temp;

	pow = ft_strlen(n) / 3;
	temp = malloc((pow + 2) * sizeof(char *));
	i = 0;
	while (i < (pow + 1))
	{
		temp[i] = malloc((3 + 1) * sizeof(char));
		i++;
	}
	return (temp);
}

void	printf_tab(char **tab, char *keyword)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		printf("%s[%d] =%s\n", keyword, i, tab[i]);
		i++;
	}
}
