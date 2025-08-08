/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed- <mohamed-@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 08:53:19 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/08 08:53:19 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_sort(int argc, char **argv)
{
	int		i;
	int		c;
	char	*tmp;

	i = 1;
	while (i < argc - 1)
	{
		c = i + 1;
		while (c < argc)
		{
			if (ft_strcmp(argv[i], argv[c]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[c];
				argv[c] = tmp;
			}
			c++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	i = 1;
	ft_sort(argc, argv);
	while (i < argc)
	{
		c = 0;
		while (argv[i][c])
			write(1, &argv[i][c++], 1);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
