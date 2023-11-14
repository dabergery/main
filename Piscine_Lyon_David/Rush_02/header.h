/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cefuente <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 16:28:43 by cefuente          #+#    #+#             */
/*   Updated: 2023/10/01 22:34:07 by cefuente         ###   ########.fr       */
/*   Updated: 2023/10/01 22:17:23 by aantony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

void	print_number(char *dic);
void	print_trio(char *trio, char *dic);
void	print_trio_bis(char *trio, char *dic);
void	print_duo(char *trio, char *dic);
void	print_uno(char *trio, char *dic);
void	ft_shatter_n_as_str(char *str_n, char **trio, char **order, char *dic);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*give_str_power(int power);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strch(char *str, char to_find);
char	*ft_strcat(char *dest, char *src);
char	*ft_chcat(char *dest, char src);
char	*ft_strjoin(int size, char **strs, char *sep);
char	**ft_init_trio(char *n);
char	**ft_init_order(char *n);
int		odd_or_even(int n);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
int		invalid_input(int argc, char **argv);
int		sub_thousand(char *dic, char **trio, char **order);
int		init_output(char *index);
int		init_input(char *ref, char *value);
int		fill_order(char **order, int line, int power);
void	fill_trio(char **trio, int line, char *str, int ct_i);
void	first_elements_trio(char **trio, int line, char *str, int limit);
void	printf_tab(char **tab, char *keyword);
#endif
