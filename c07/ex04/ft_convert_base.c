/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed- <mohamed-@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 15:45:39 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/12 15:45:39 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	precheck(char *str, int *tf);
int	is_valid(char *base, int *base_c);
int	base_value(char str, char *base);

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

int	res_init(char **result, long *n, int base_c)
{
	int		i;
	long	nbr;

	i = (*n <= 0);
	nbr = *n;
	while (nbr != 0)
	{
		nbr /= base_c;
		i++;
	}
	*result = malloc(i + 1);
	if (!*result)
		return (0);
	if (*n < 0)
	{
		*n = -*n;
		(*result)[0] = '-';
	}
	(*result)[i] = '\0';
	return (i);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	long	n;
	int		base_c;
	int		i;
	char	*result;

	if (!is_valid(base, &base_c))
		return (0);
	n = nbr;
	i = res_init(&result, &n, base_c);
	if (n == 0)
		result[0] = base[0];
	while (n > 0)
	{
		result[--i] = base[n % base_c];
		n /= base_c;
	}
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	value;

	value = ft_atoi_base(nbr, base_from);
	return (ft_putnbr_base(value, base_to));
}

// #include <unistd.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char *res;
// 	res = ft_convert_base("   ---+1010", "01", "0123456789ABCDEF");
// 	if (res)
// 	{
// 		printf("%s\n", res); // "-A"
// 	}
// 	res = ft_convert_base("-42", "0123456789", "01");
// 	if (res)
// 	{
// 		printf("%s\n", res); // "-101010"
// 	}
// 	res = ft_convert_base("1A", "0123456789ABCDEF", "0123456789");
// 	if (res)
// 	{
// 		printf("%s\n", res); // "26"
// 	}
// 	return (0);
// }
