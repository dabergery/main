/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daberger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:34:25 by daberger          #+#    #+#             */
/*   Updated: 2023/10/03 18:11:32 by daberger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= '9') && (str[i] >= '0'))
			i++;
		else
			return (0);
	}
	return (1);
}

/*
int	main(void)
{
	char	str[] = "";

	printf("%d", ft_str_is_numeric(str));
}
*/
