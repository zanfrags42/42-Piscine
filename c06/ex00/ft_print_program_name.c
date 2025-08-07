/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed- <mohamed-@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 17:08:19 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/07 17:08:19 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	*program;

	(void)argc;
	i = 0;
	program = argv[0];
	while (program[i])
		write(1, &program[i++], 1);
	write(1, "\n", 1);
	return (0);
}
