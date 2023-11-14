/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daberger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:54:01 by daberger          #+#    #+#             */
/*   Updated: 2023/10/04 09:47:10 by daberger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}

/*
int		main()
{
	unsigned int boundary = 8;
	char	eg_string[] = "standard_output";
	char	cpy_string[] = "standard_output";

	printf("str_1)\n%s\nstr_2)\n%s\n\n",eg_string, cpy_string);
	ft_strncpy(cpy_string, eg_string, boundary);
	printf("str_1)\n%s\nstr_2\n%s\n",eg_string, cpy_string);
	return (0);
}
*/
