
void	print_error(void);
char	**convert_in_array(char *str);
int		is_correct_params(char **argv);
void	rush(char **clues);

int	main(int argc, char **argv)
{
	char	**clues;

	clues = convert_in_array(argv[1]);
	if (!is_correct_params(argv) || argc != 2)
		print_error();
	else
		rush(clues);
	return (0);
}

// If it's valid, it calls the rush function/* ************************************************************************** */

#include <unistd.h>

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

void	print_error(void);
void	print_solution(char **puzzle_board);
void	set_clues(char **puzzle_board, char **clues);
char	**create_board(void);
int		is_correct_left_view(char **puzzle_board, int row);
int		is_correct_top_view(char **puzzle_board, int column);
int		is_in_column(char **puzzle_board, int row, int column, int digit);
int		is_in_row(char **puzzle_board, int row, int column, int digit);

void	rush_recursive(char **puzzle_board, int row, int column)
{
	int	i;

	i = 1;
	while (i <= 4 && row <= 4 && column <= 4)
	{
		if (!is_in_column(puzzle_board, row, column, i)
			&& !is_in_row(puzzle_board, row, column, i))
		{
			puzzle_board[row][column] = i + '0';
			if (row == 4 && !is_correct_top_view(puzzle_board, column))
				return ;
			if (column == 4)
			{
				if (is_correct_left_view(puzzle_board, row))
				{
					rush_recursive(puzzle_board, row + 1, 1);
					if (row == 4 && is_correct_top_view(puzzle_board, column))
						print_solution(puzzle_board);
				}
			}
			else
				rush_recursive(puzzle_board, row, column + 1);
		}
		i++;
	}
}

void	rush(char **clues)
{
	char	**puzzle_board;

	puzzle_board = create_board();
	set_clues(puzzle_board, clues);
	rush_recursive(puzzle_board, 1, 1);
	if (puzzle_board[0][0] == '0')
		print_error();
}

#include <stdlib.h>

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
