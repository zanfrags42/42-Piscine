/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed- <mohamed-@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 20:47:28 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/06 20:47:28 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	val;

	if (nb < 0)
		return (0);
	val = 1;
	while (nb > 1)
	{
		val *= nb;
		nb--;
	}
	return (val);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int val = ft_iterative_factorial(9);
// 	printf("%d\n", val);
// 	return (0);
// }