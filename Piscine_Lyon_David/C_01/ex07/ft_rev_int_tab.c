/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daberger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 20:37:50 by daberger          #+#    #+#             */
/*   Updated: 2023/10/01 11:25:10 by daberger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		swp;
	int		i;
	int		j;

	j = tab[size];
	i = 0;
	while (i <= 1 + size / 2)
	{
		swp = tab[i];
		tab[i] = tab[size];
		tab[size--] = swp;
		i++;
	}
}

/*
int   main(void)
{
  int size = 7;
  int int_arr[] = {1, 3, 5, 7, 9, 15, 17, 20};
  int demo = 0;

  printf("input=\n{");
  while(demo != 8)
  {
    printf("%d, ", int_arr[demo]);
    demo++;
  }
  printf("}\n\n");

    ft_rev_int_tab(int_arr, size);
  demo = 0;
    printf("output=\n{");
  while(demo != 8)
  {
    printf("%d, ", int_arr[demo]);
    demo++;
  }
  printf("}\n\n");
}
*/
