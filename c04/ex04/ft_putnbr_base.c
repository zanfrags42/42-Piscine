/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed- <mohamed-@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 21:58:49 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/04 21:58:49 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_valid(char *base)
{
	int	i;
	int	c;

	i = 0;
	while (base[i])
	{
		c = i + 1;
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (base[c])
		{
			if (base[i] == base[c])
				return (0);
			c++;
		}
		i++;
	}
	return (i > 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;
	long	i;

	n = nbr;
	i = 0;
	if (!(is_valid(base)))
		return ;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	while (base[i])
		i++;
	if (n >= i)
		ft_putnbr_base(n / i, base);
	write (1, &base[n % i], 1);
}

// int	main(void)
// {
// 	ft_putnbr_base(-255,"0123456789ABCDEF");
// 	return (0);
// }