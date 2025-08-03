/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   views2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed- <mohamed-@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 14:06:34 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/03 22:08:53 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_in_row(char **puzzle_board, int row, int column, int digit)
{
	int	i;

	i = 1;
	while (i < column)
	{
		if (puzzle_board[row][i] == digit + '0')
			return (1);
		i++;
	}
	return (0);
}

int	is_in_column(char **puzzle_board, int row, int column, int digit)
{
	int	i;

	i = 1;
	while (i < row)
	{
		if (puzzle_board[i][column] == digit + '0')
			return (1);
		i++;
	}
	return (0);
}
