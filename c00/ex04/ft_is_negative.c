/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed- <mohamed-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 20:44:52 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/03 11:38:51 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	v;

	if (n < 0)
	{
		v = 'N';
	}
	else
	{
		v = 'P';
	}
	write(1, &v, 1);
}

// int	main(void)
// {
// 	ft_is_negative(0);
// 	ft_is_negative(-1);
// 	write(1, "\n", 1);
// 	return (0);
// }