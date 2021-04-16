/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhenriqu <lhenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 11:57:15 by lhenriqu          #+#    #+#             */
/*   Updated: 2021/04/16 16:49:47 by lhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	char	i;
	int		length;

	length = 0;
	while (1)
	{
		i = *str;
		if (i == '\0')
			break ;
		str++;
		length++;
	}
	return (length);
}
