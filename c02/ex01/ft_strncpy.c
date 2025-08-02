/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed- <mohamed-@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 09:47:52 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/02 09:47:52 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (src[i] != '\0')
			dest[i] = src[i];
		else
			dest[i] = '\0';
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	dest[] = "where";
// 	char	src[] = "now";
// 	int	num = 2;

// 	printf("%s", ft_strncpy(dest, src, num));
// }