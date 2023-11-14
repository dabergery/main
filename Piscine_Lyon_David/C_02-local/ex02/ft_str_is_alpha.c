/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daberger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 20:07:06 by daberger          #+#    #+#             */
/*   Updated: 2023/10/04 10:01:52 by daberger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			i++;
		if (str[i] <= 'z' && str[i] >= 'a')
			i++;
		else
			return (0);
	}
	return (1);
}

/*
int	main(void)
{
	char	str[] = "THEblOBfiShes";

	printf("%d", ft_str_is_alpha(str));
}
*/
