/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhenriqu <lhenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 13:25:13 by lhenriqu          #+#    #+#             */
/*   Updated: 2021/04/10 13:07:05 by lhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printif(int i, int j, int k)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(k);
	if (i != 55)
	{
		ft_putchar(44);
		ft_putchar(32);
	}
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 48;
	while (i <= 57)
	{
		j = i + 1;
		while (j <= 57)
		{
			k = j + 1;
			while (k <= 57)
			{
				ft_printif(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
