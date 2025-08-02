/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed-  <mohamed-@student.42singapore    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 08:33:17 by mohamed-x         #+#    #+#             */
/*   Updated: 2025/08/01 08:33:17 by mohamed-x        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// 
void	ft_sort_int_tab(int *tab, int size)
{
	int	c;
	int	tf;
	int	tmp;

	tf = 1;
	while (tf)
	{
		c = 0;
		tf = 0;
		while (c < size - 1)
		{
			if (tab[c] > tab[c + 1])
			{
				tmp = tab[c];
				tab[c] = tab[c + 1];
				tab[c + 1] = tmp;
				tf = 1;
			}
			c++;
		}
	}
}

// int	main(void)
// {
// 	int	i = 0;
// 	int	size = 5;
// 	int	a[5] = {9, 10, 1, 20, 0};
// 
// 	ft_sort_int_tab(a, size);
// 	while (i < size)
// 	{
// 		printf("%d ", a[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }