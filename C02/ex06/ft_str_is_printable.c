/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhenriqu <lhenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 18:43:41 by lhenriqu          #+#    #+#             */
/*   Updated: 2021/04/16 15:45:48 by lhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_printable(char c)
{
	if (c >= 32 && c <= 127)
	{
		return (1);
	}
	return (0);
}

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(is_printable(str[i])))
			return (0);
		i++;
	}
	return (1);
}
