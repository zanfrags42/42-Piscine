/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: mohamed- <mohamed-@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 13:59:10 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/03 22:10:55 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
=======
/*   By: mohamed- <mohamed-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 13:59:10 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/03 14:00:35 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
>>>>>>> 706fab569c44a1738acd9c44ce2f83937dddfaf1

void	set_clues(char **puzzle_board, char **clues)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i <= 4)
	{
		puzzle_board[0][i] = clues[0][j];
		puzzle_board[5][i] = clues[1][j];
		puzzle_board[i][0] = clues[2][j];
		puzzle_board[i][5] = clues[3][j];
		i++;
		j++;
	}
}

char	**memory_allocation(int rows, int columns)
{
	char	**table;
	int		i;

	i = 0;
	table = (char **)malloc(sizeof(char *) * rows);
	if (table == NULL)
		return (NULL);
	while (i < rows)
	{
		table[i] = (char *)malloc(sizeof(char) * columns);
		if (table[i] == NULL)
			return (NULL);
		i++;
	}
	return (table);
}

char	**create_board(void)
{
	char	**board;
	int		i;
	int		j;

	board = memory_allocation(6, 6);
	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			board[i][j] = '0';
			j++;
		}
		i++;
	}
	return (board);
}

int	is_correct_params(char **argv)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (argv[1][i])
	{
		if (argv[1][i] >= '1' && argv[1][i] <= '4' && i % 2 == 0)
			count++;
		else if (argv[1][i] != ' ')
			return (0);
		i++;
	}
	if (count == 16)
		return (1);
	return (0);
}

char	**convert_in_array(char *str)
{
	char	**clues;
	int		i;
	int		j;

	i = 0;
	j = 0;
	clues = memory_allocation(4, 4);
	while (j < 4)
	{
		clues[0][j] = str[i];
		clues[1][j] = str[i + 8];
		clues[2][j] = str[i + 16];
		clues[3][j] = str[i + 24];
		j++;
		i += 2;
	}
	return (clues);
}
