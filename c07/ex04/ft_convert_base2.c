/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed- <mohamed-@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 15:44:00 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/12 15:44:00 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	precheck(char *str, int *tf)
{
	int	i;

	i = 0;
	*tf = 1;
	while ((str[i] == 32) || (str[i] > 8 && str[i] < 14))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			*tf = -*tf;
		i++;
	}
	return (i);
}

int	is_valid(char *base, int *base_c)
{
	int	i;
	int	c;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		c = i + 1;
		while (base[c])
			if (base[i] == base[c++])
				return (0);
		i++;
	}
	*base_c = i;
	return (i > 1);
}

int	base_value(char str, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == str)
			return (i);
		i++;
	}
	return (-1);
}
