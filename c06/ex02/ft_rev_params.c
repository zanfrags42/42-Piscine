/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed- <mohamed-@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 02:28:38 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/08 02:28:38 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		c;
	char	*current;

	while (argc > 1)
	{
		current = argv[--argc];
		c = 0;
		while (current[c])
			write(1, &current[c++], 1);
		write(1, "\n", 1);
	}
	return (0);
}
