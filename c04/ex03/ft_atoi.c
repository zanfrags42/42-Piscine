/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed- <mohamed-@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 21:14:35 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/04 21:14:35 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	tf;
	int	out;

	i = 0;
	tf = 1;
	out = 0;
	while ((str[i] == 32) || (str[i] > 8 && str[i] < 14))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			tf = -tf;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
		out = out * 10 + (str[i++] - 48);
	return (out * tf);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_atoi("--+-+132143893"));
// }
