/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daberger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 20:28:29 by daberger          #+#    #+#             */
/*   Updated: 2023/10/03 22:20:57 by daberger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)

{
	int		i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (i >= n || s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*
int        main(void)
{
    char    one[] = "antoine is Gay";
    char    two[] = "antoine is gay";
    int     n = 7;
    printf("Running Program...\n%d\n", ft_strncmp(one, two, n));
    return (0);
}
*/
