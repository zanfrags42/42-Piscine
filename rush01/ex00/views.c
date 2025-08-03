/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   views.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed- <mohamed-@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 14:03:13 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/03 22:08:39 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_correct_right_view(char **puzzle_board, int row)
{
	int		i;
	char	visible;
	char	highest;

	i = 4;
	visible = '1';
	highest = puzzle_board[row][i];
	while (i >= 1)
	{
		if (puzzle_board[row][i] > highest)
		{
			highest = puzzle_board[row][i];
			visible++;
		}
		i--;
	}
	return (puzzle_board[row][5] == visible);
}

int	is_correct_left_view(char **puzzle_board, int row)
{
	int		i;
	char	visible;
	char	highest;

	i = 1;
	visible = '1';
	highest = puzzle_board[row][i];
	while (i <= 4)
	{
		if (puzzle_board[row][i] > highest)
		{
			highest = puzzle_board[row][i];
			visible++;
		}
		i++;
	}
	if (puzzle_board[row][0] == visible)
		return (is_correct_right_view(puzzle_board, row));
	return (0);
}

int	is_correct_bottom_view(char **puzzle_board, int column)
{
	int		i;
	char	visible;
	char	highest;

	i = 4;
	visible = '1';
	highest = puzzle_board[i][column];
	while (i >= 1)
	{
		if (puzzle_board[i][column] > highest)
		{
			highest = puzzle_board[i][column];
			visible++;
		}
		i--;
	}
	return (puzzle_board[5][column] == visible);
}

int	is_correct_top_view(char **puzzle_board, int column)
{
	int		i;
	char	visible;
	char	highest;

	i = 1;
	visible = '1';
	highest = puzzle_board[i][column];
	while (i <= 4)
	{
		if (puzzle_board[i][column] > highest)
		{
			highest = puzzle_board[i][column];
			visible++;
		}
		i++;
	}
	if (puzzle_board[0][column] == visible)
		return (is_correct_bottom_view(puzzle_board, column));
	return (0);
}
