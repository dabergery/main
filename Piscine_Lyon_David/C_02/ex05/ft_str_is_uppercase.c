/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daberger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:34:25 by daberger          #+#    #+#             */
/*   Updated: 2023/10/03 18:34:23 by daberger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= 'Z') && (str[i] >= 'A'))
			i++;
		else
			return (0);
	}
	return (1);
}

/*
int	main(void)
{
	char	str[] = "QQ";

	printf("%d", ft_str_is_uppercase(str));
}
*/
