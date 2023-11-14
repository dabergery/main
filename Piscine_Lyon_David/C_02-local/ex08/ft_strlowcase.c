/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daberger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:34:25 by daberger          #+#    #+#             */
/*   Updated: 2023/10/03 19:21:59 by daberger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= 'Z') && (str[i] >= 'A'))
			str[i] = str[i] + 32;
		else
			i++;
			return (0);
	}
	return (*str);
}

/*
int	main(void)
{
	char	str[] = "Phonkscyion";

	printf("char_str=\n%s\n\n", str);
	
	ft_strlowcase(str);

	printf("char_str=\n%s\n", str);
}
*/
