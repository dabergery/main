/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daberger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:48:33 by daberger          #+#    #+#             */
/*   Updated: 2023/09/17 20:19:03 by daberger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	a;	
	char	b;

	a = 'P';
	b = 'N';
	if (n >= 0)
	{
		write (1, &a, 1);
	}
	else
	{
		write (1, &b, 1);
	}
}

int	main(void)
{
	ft_is_negative(5);
}
