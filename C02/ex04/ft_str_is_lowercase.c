/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhenriqu <lhenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 11:50:53 by lhenriqu          #+#    #+#             */
/*   Updated: 2021/04/16 15:45:06 by lhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_lowercase(char c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

int		is_alphanum(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(is_alphanum(str[i])))
			return (0);
		if (!(is_lowercase(str[i])))
			return (0);
		i++;
	}
	return (1);
}
