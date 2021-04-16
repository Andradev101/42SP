/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhenriqu <lhenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 13:53:10 by lhenriqu          #+#    #+#             */
/*   Updated: 2021/04/10 11:11:59 by lhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int aux0;
	int aux1;

	aux0 = *a;
	aux1 = *b;
	*a = aux0 / aux1;
	*b = aux0 % aux1;
}
