/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed- <mohamed-@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 19:30:27 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/02 19:30:27 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	c = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if ((c) && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			c = 0;
		}
		else
			c = 1;
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char test[] = "hi, how are you? 42wOrds forTy-two; fifty+and+one";
// 	printf("%s\n", ft_strcapitalize(test));
// 	return (0);
// }