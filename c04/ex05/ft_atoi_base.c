/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed- <mohamed-@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 10:21:20 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/05 10:21:20 by mohamed-         ###   ########.fr       */
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

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	base_c;
	int	tf;
	int	result;

	result = 0;
	i = precheck(str, &tf);
	if (!is_valid(base, &base_c))
		return (0);
	while (str[i] && base_value(str[i], base) != -1)
		result = (result * base_c) + base_value(str[i++], base);
	return (result * tf);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_atoi_base(" ---FFLKJFSOIZZDDF","0123456789ABCDEF"));
// 	return (0);
// }