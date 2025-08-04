/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed- <mohamed-@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:31:57 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/04 13:31:57 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_c;
	unsigned int	src_c;
	unsigned int	c;
	unsigned int	total;

	dest_c = 0;
	src_c = 0;
	c = 0;
	while (dest[dest_c])
		dest_c++;
	while (src[src_c])
		src_c++;
	total = dest_c + src_c;
	if (size < dest_c || size == 0)
		return (size + src_c);
	while (dest_c < size - 1 && c < src_c)
	{
		dest[dest_c++] = src[c++];
	}
	dest[dest_c] = '\0';
	return (total);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	dest[100] = "lor ";
// 	char	src[] = "mai kai";
// 	int	nb = 15;
// 	int	result = ft_strlcat(dest, src, nb);
// 	printf("%s - %d\n", dest, result);
// 	return (0);
// }