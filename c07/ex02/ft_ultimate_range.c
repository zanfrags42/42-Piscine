/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed- <mohamed-@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 10:50:02 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/08 10:50:02 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	c;

	if (min >= max)
		return (0);
	i = max - min;
	*range = malloc(sizeof(int) * i);
	if (!*range)
		return (-1);
	c = 0;
	while (c < i)
		(*range)[c++] = min++;
	return (i);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	min = 2;
// 	int	max = 10;
// 	int	i = 0;
// 	int *range;
// 	ft_ultimate_range(&range, min, max);
// 	while (i < max - min)
// 		printf("%d, ", range[i++]);
// 	printf("\n");
// 	return (0);
// }