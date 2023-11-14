/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daberger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:06:28 by daberger          #+#    #+#             */
/*   Updated: 2023/10/01 11:32:05 by daberger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putstr(char *str)
{
	int		i;
	int		n;

	i = 0;
	while (str[i] != '\0')
	{
		n = str[i];
		write(1, &n, 1);
		i++;
	}
	return (0);
}

/*
int		main(void)
{
    char vocabulaire[] = "I'm youre father!";
    ft_putstr(vocabulaire);
}
*/
