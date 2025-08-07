/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed- <mohamed-@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 17:08:26 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/07 17:08:26 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		c;
	char	*current;

	i = 1;
	while (i < argc)
	{
		current = argv[i++];
		c = 0;
		while (current[c])
			write(1, &current[c++], 1);
		write(1, "\n", 1);
	}
	return (0);
}
