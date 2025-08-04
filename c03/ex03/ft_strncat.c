/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed- <mohamed-@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 08:16:33 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/04 08:16:33 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (dest[i])
		i++;
	while (src[c] && c < nb)
	{
		dest[i++] = src[c++];
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	dest[100] = "lor ";
// 	char	src[] = "mai kai";
// 	int	nb = 3;
// 	printf("%s\n", dest);
// 	ft_strncat(dest, src, nb);
// 	printf("%s\n", dest);
// 	return (0);
// }