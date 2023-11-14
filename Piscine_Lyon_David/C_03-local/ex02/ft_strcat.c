/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daberger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:23:18 by daberger          #+#    #+#             */
/*   Updated: 2023/10/04 12:12:20 by daberger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(src[i] != '\0')
		i++;
	while (dest[j] != '\0')
		dest[j] = src[i];
		i++;
		j++;
		else
			return (dest);
	}
}

int main (void)
{
	int dada[] = "this is not a word";
	int culcul[] = "but here is the following sentence";
	ft_strcat(dada, culcul);
}
//empiler deux chaines de characteres a la suite
