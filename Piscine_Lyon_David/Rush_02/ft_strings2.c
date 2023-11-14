/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strings2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 14:02:04 by cefuente          #+#    #+#             */
/*   Updated: 2023/10/01 22:08:37 by cefuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

char	*ft_chcat(char *dest, char src)
{
	int	i;

	i = 0;
	while (dest[i])
		i++;
	dest[i++] = src;
	dest[i] = 0;
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*newtab;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (i < size)
		len += ft_strlen(strs[i++]);
	len += ((ft_strlen(sep)) * (size - 1));
	newtab = malloc(sizeof(char) * (len + 1));
	if (!newtab)
		return (newtab);
	i = 0;
	while (i < size)
	{
		ft_strcat(newtab, strs[i]);
		if (i < size - 1)
			ft_strcat(newtab, sep);
		i++;
	}
	return (newtab);
}
