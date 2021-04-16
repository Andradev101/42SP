
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhenriqu <lhenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 21:33:26 by lhenriqu          #+#    #+#             */
/*   Updated: 2021/04/15 23:27:00 by lhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_upperc(char c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(is_upperc(str[i])))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

#include <stdio.h>
 
int		main(void)
{
	printf("-6 = %d (0)\n", ft_iterative_factorial(-6));
	printf(" 0 = %d (1)\n", ft_iterative_factorial(0));
	printf(" 1 = %d (1)\n", ft_iterative_factorial(1));
	printf(" 2 = %d (2)\n", ft_iterative_factorial(2));
	printf(" 3 = %d (6)\n", ft_iterative_factorial(3));
	printf(" 4 = %d (24)\n", ft_iterative_factorial(4));
}