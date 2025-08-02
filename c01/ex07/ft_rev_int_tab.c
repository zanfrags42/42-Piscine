/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed-  <mohamed-@student.42singapore    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 01:49:40 by mohamed-x         #+#    #+#             */
/*   Updated: 2025/08/01 01:49:40 by mohamed-x        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// 
void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	c;
	int	current;

	c = 0;
	while (c < size / 2)
	{
		current = size - c - 1;
		tmp = tab[c];
		tab[c] = tab[current];
		tab[current] = tmp;
		c++;
	}
}

// int	main(void)
// {
// 	int a[5];
// 
// 	a[0] = 1;
// 	a[1] = 2;
// 	a[2] = 3;
// 	a[3] = 4;
// 	a[4] = 5;
// 	ft_rev_int_tab(a, 5);
// 	printf("reversed numbers - %d%d%d%d%d\n",
// 			a[0], a[1], a[2], a[3], a[4]);
// 	return (0);
// }