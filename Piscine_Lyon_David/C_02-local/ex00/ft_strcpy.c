/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daberger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:54:01 by daberger          #+#    #+#             */
/*   Updated: 2023/10/04 09:46:28 by daberger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int		main()
{
	char	eg_string[] = "standard Output";
	char	cpy_string[4];

	printf("str_1)\n%s\nstr_2)\n%s\n\n",eg_string, cpy_string);
	ft_strcpy(cpy_string, eg_string);
	printf("str_1)\n%s\nstr_2\n%s\n",eg_string, cpy_string);
	return (0);
}
*/
