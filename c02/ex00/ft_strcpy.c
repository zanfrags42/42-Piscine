/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed-  <mohamed-@student.42singapore    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 08:34:32 by mohamed-x         #+#    #+#             */
/*   Updated: 2025/08/02 08:34:32 by mohamed-x        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char a[] = "destination";
// 	char *b = "source";
// 	ft_strcpy(a, b);
// 	printf("%s\n", a);
// 	return (0);
// }