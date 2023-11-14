/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daberger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:34:25 by daberger          #+#    #+#             */
/*   Updated: 2023/10/03 19:14:12 by daberger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= 'z') && (str[i] >= 'a'))
			str[i] = str[i] - 32;
		if ((str[i] <= 'Z') && (str[i] >= 'A'))
			i++;
		else
			return (0);
	}
	return (*str);
}

/*
int	main(void)
{
	char	str[] = "Phonkscyion";

	printf("char_str=\n%s\n\n", str);
	
	ft_strupcase(str);

	printf("char_str=\n%s\n", str);
}
*/
