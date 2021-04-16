/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhenriqu <lhenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 15:09:44 by lhenriqu          #+#    #+#             */
/*   Updated: 2021/04/16 15:45:30 by lhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_uppercase(char c)
{
	if (c >= 65 && c <= 90)
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

int		ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(is_alphanum(str[i])))
			return (0);
		if (!(is_uppercase(str[i])))
			return (0);
		i++;
	}
	return (1);
}
