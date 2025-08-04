/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed- <mohamed-@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 17:44:46 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/04 17:44:46 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	num;
	char	c;

	num = nb;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	if (num > 9)
		ft_putnbr(num / 10);
	c = num % 10 + 48;
	write(1, &c, 1);
}

// int	main(void)
// {
// 	int	nb = 2147483647;
// 	ft_putnbr(nb);
// 	write(1, "\n", 1);
// 	return (0);
// }