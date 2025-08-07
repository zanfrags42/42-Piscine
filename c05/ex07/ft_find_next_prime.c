/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed- <mohamed-@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 09:53:35 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/07 09:53:35 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb > 2147483646)
		return (0);
	if (nb < 2)
		return (2);
	if (!ft_is_prime(nb))
		nb = (ft_find_next_prime(nb + 1));
	return (nb);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	val = 8;
// 	printf("%d\n", ft_find_next_prime(val));
// }
// 
// iterative version
// while (!ft_is_prime(nb))
// 		nb++;
// 	return (nb);