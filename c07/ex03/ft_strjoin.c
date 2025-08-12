/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed- <mohamed-@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 11:48:54 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/08 11:48:54 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*allocate(int size, char **strs, char *sep)
{
	int	i;
	int	c;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		c = 0;
		while (strs[i][c++])
			len++;
		if (i++ < size - 1)
		{
			c = 0;
			while (sep[c++])
				len++;
		}
	}
	return (malloc(len + 1));
}

char	*join(int size, char **strs, char *sep, char *res)
{
	int	i;
	int	c;
	int	d;

	d = 0;
	i = 0;
	while (i < size)
	{
		c = 0;
		while (strs[i][c])
			res[d++] = strs[i][c++];
		if (i++ < size -1)
		{
			c = 0;
			while (sep[c])
				res[d++] = sep[c++];
		}
	}
	res[d] = '\0';
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;

	if (size < 1)
	{
		res = malloc(1);
		if (res)
			res[0] = '\0';
		return (res);
	}
	res = allocate(size, strs, sep);
	if (!res)
		return (NULL);
	return (join(size, strs, sep, res));
}

// #include <unistd.h>
// #include <stdio.h>
// int	main(void){
// 	char *c[] = {"hello", "up", "why not"};
// 	char	*result;
// 	result = ft_strjoin(3, c, "  .");
// 	printf("%s\n", result);
// 	return (0);
// }
