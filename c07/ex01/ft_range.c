/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed- <mohamed-@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 09:50:49 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/08 09:50:49 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;
	int	c;

	if (min >= max)
		return (0);
	i = max - min;
	result = malloc(sizeof(int) * i);
	if (!result)
		return (0);
	c = 0;
	while (c < i)
		result[c++] = min++;
	return (result);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	min = 2;
// 	int	max = 10;
// 	int	i = 0;
// 	int *result = ft_range(min, max);
// 	while (i < max - min)
// 		printf("%d, ", result[i++]);
// 	printf("\n");
// 	return (0);
// }