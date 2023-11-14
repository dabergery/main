/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daberger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:40:44 by daberger          #+#    #+#             */
/*   Updated: 2023/09/26 12:44:32 by daberger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

int	main(void)
{
	int nana;
	int	bebe;
	int division;
	int modulo;

	nana = 512;
	bebe = 9;
	division = 0;
	modulo = 0;
	printf("av-div= %d\nav-mod= %d\n", division, modulo);
	ft_div_mod(nana, bebe, &division, &modulo);
	printf("ap-div = %d\nap-mod= %d", division, modulo);
}
*/
