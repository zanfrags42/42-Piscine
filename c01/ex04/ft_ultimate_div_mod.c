/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed- <mohamed-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 02:33:14 by mohamed-          #+#    #+#             */
/*   Updated: 2025/07/30 02:59:37 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// 
void	ft_ultimate_div_mod(int *a, int*b)
{
	int	result;

	result = *a / *b;
	*b = *a % *b;
	*a = result;
}
// int	main(void)
// {
// 	int	a;
// 	int	b;
// 
// 	a = 239123;
// 	b = 21311;
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("%d%s%d\n", a, " R ", b);
// 	return (0);
// }