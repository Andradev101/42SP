/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhenriqu <lhenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 22:26:47 by lhenriqu          #+#    #+#             */
/*   Updated: 2021/04/10 13:25:34 by lhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printnum(unsigned int nb)
{
	if (nb <= 9)
	{
		ft_putchar(nb + 48);
	}
	else
	{
		ft_printnum(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
}

void	ft_putnbr(int num)
{
	unsigned int unum;

	if (num < 0)
	{
		unum = num * -1;
		ft_putchar('-');
	}
	else
	{
		unum = num;
	}
	ft_printnum(unum);
}
