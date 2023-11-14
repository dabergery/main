/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daberger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:40:56 by daberger          #+#    #+#             */
/*   Updated: 2023/09/26 16:03:13 by daberger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int		swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*
int		main(void)
{
	int	dada;
	int culcul;
	dada = 0;
	culcul = 1;
	write(1, &dada, 1);
	write(1, &culcul, 1);
	ft_swap(&dada, &culcul);
	write(1, &dada, 1);
	write(1, &culcul, 1);
	return(0);
}
*/
