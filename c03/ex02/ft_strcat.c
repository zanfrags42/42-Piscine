/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed- <mohamed-@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 07:51:31 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/04 07:51:31 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (dest[i])
		i++;
	while (src[c])
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
// 	printf("%s\n", dest);
// 	ft_strcat(dest, src);
// 	printf("%s\n", dest);
// 	return (0);
// }