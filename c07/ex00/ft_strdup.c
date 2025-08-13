/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed- <mohamed-@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 08:56:14 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/08 08:56:14 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		c;
	char	*dup;

	c = 0;
	while (src[c])
		c++;
	dup = malloc(sizeof(char) * (c + 1));
	if (!dup)
		return (0);
	c = 0;
	while (src[c])
	{
		dup[c] = src[c];
		c++;
	}
	dup[c] = '\0';
	return (dup);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	*src = "lmao";
// 	printf("%s\n", ft_strdup(src));
// 	return (0);
// }