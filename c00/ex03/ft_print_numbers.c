/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed- <mohamed-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 20:36:23 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/03 11:38:10 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	i;

	i = 48;
	while (i <= 57)
	{
		write(1, &i, 1);
		i++;
	}
}

// int	main(void)
// {
// 	ft_print_numbers();
// 	write(1, "\n", 1);
// 	return (0);
// }
