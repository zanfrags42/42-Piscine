/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed- <mohamed-@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 04:43:46 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/03 04:43:46 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	*hex;

	hex = "0123456789abcdef";
	while (*str)
	{
		if ((unsigned char)*str < 32 || (unsigned char)*str == 127)
		{
			write(1, "\\", 1);
			write(1, &hex[(unsigned char)*str / 16], 1);
			write(1, &hex[(unsigned char)*str % 16], 1);
		}
		else
			write(1, str, 1);
		str++;
	}
}
// int	main(void)
// {
// 	char	*line = "Hello\nHow are you?";
// 	ft_putstr_non_printable(line);
// 	write (1, "\n", 1);
// 	return (0);
// }