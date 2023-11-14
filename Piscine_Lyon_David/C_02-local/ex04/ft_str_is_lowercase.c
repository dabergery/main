/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daberger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:34:25 by daberger          #+#    #+#             */
/*   Updated: 2023/10/03 18:33:22 by daberger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= 'z') && (str[i] >= 'a'))
			i++;
		else
			return (0);
	}
	return (1);
}

/*
int	main(void)
{
	char	str[] = "alphabet-!";

	printf("%d", ft_str_is_lowercase(str));
}
*/
