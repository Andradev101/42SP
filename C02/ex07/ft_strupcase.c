/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhenriqu <lhenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 21:34:49 by lhenriqu          #+#    #+#             */
/*   Updated: 2021/04/16 15:46:17 by lhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_lowerc(char c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_lowerc(str[i]))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
