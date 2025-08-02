/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed-  <mohamed-@student.42singapore    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 18:51:24 by mohamed-x         #+#    #+#             */
/*   Updated: 2025/07/31 18:51:24 by mohamed-x        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// 
int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

// int	main(void)
// {
// 	char	input[9999];
// 
// 	printf("%s\n", "ft_strlen | count string length");
// 	fgets(input, sizeof(input), stdin);
// 	printf("%d\n", ft_strlen(input));
// 	return (0);
// }
// 