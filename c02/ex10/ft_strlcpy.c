/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed- <mohamed-@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 02:27:33 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/03 02:27:33 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	i = 0;
	while (src[i])
		i++;
	return (i);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	dest[] = "laod what is this";
// 	char	src[] = "what do you think";
// 	unsigned int	size = 3;
// 	int	result = ft_strlcpy(dest, src, size);
// 	printf("%s - %d\n", dest, result);
// 	return (0);
// }