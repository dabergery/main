/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daberger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:26:19 by daberger          #+#    #+#             */
/*   Updated: 2023/09/18 11:04:06 by daberger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void)
{

	char a;
	char b;
	char c;

	a = '0' + 0 ;
	b = 0 + '0';
	c = 0 + '0';
 
 write(1, &a, 1);
 write(1, &b, 1);

 while(a <= 7 && b <= 8 && c <= 9)
	{
		if(b <= 8)
		{
			if (c <= 9)
			{
				write(1, &c, 1);
				c++;
			}
			b++;
		}
		a++;
	}
}

int	main()
{
	ft_print_comb();
}