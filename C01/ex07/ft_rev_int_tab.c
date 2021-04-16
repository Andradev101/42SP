/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhenriqu <lhenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 18:55:42 by lhenriqu          #+#    #+#             */
/*   Updated: 2021/04/16 14:54:51 by lhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int copy;
	int aux[size];

	copy = 0;
	i = size - 1;
	while (i >= 0)
	{
		aux[copy] = tab[i];
		i--;
		copy++;
	}
	copy = 0;
	while (copy < size)
	{
		tab[copy] = aux[copy];
		copy++;
	}
}
