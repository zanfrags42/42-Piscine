/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed- <mohamed-@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 00:55:29 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/07 00:55:29 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (!power)
		return (1);
	if (power < 0)
		return (0);
	return (nb * (ft_recursive_power(nb, power - 1)));
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_recursive_power(8,3));
// 	return (0);
// }