/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daberger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 11:45:27 by daberger          #+#    #+#             */
/*   Updated: 2023/09/27 18:48:42 by daberger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		swpdiv;
	int		swpmod;

	swpdiv = *a / *b;
	swpmod = *a % *b;
	*a = swpdiv;
	*b = swpmod;
}
/*
#include <stdio.h>

int main(void)
{
	int miku = 50;
	int hatsune = 2;
	printf("miku)%d\nhatsune)%d\n", miku, hatsune);
	ft_ultimate_div_mod(&miku, &hatsune);
	printf("miku)%d\nhatsune)%d\n", miku, hatsune);
}
*/
