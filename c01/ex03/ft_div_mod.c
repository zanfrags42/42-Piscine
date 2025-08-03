/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed- <mohamed-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 01:46:05 by mohamed-          #+#    #+#             */
/*   Updated: 2025/07/30 02:31:32 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// 
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
// 
// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	c;
// 	int	d;
// 
// 	a = 9289;
// 	b = 333;
// 	ft_div_mod(a, b, &c, &d);
// 	printf("%d%s%d%s%d%s%d\n", a, " divide by ", b, " is ", c, " % ", d);
// 	return (0);
// }
