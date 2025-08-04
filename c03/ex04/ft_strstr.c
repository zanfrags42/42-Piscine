/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed- <mohamed-@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:12:33 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/04 11:12:33 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	c;

	i = 0;
	if (!(to_find[0]))
		return (str);
	while (str[i])
	{
		c = 0;
		while (str[i + c] == to_find[c])
		{
			c++;
			if (!(to_find[c]))
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     char *str = "hello worldol";
//     char *to_find = "world";
//     char *result = ft_strstr(str, to_find);
//     if (result)
//         printf("Found: %s\n", result);
//     else
//         printf("Not found.\n");
//     return 0;
// }