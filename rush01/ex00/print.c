/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: mohamed- <mohamed-@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 13:44:56 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/03 22:12:48 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
=======
/*   By: mohamed- <mohamed-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 13:44:56 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/03 13:53:58 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
>>>>>>> 706fab569c44a1738acd9c44ce2f83937dddfaf1

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_error(void)
{
	write(1, "Error\n", 6);
}

void	print_solution(char **puzzle_board)
{
	int	i;
	int	j;

	i = 1;
	if (puzzle_board[0][0] == '1')
		return ;
	puzzle_board[0][0] = '1';
	while (i <= 4)
	{
		j = 1;
		while (j <= 4)
		{
			ft_putchar(puzzle_board[i][j]);
			j++;
			if (j != 5)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		i++;
	}
}
