/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_written.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed- <mohamed-@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 09:59:52 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/13 09:59:52 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_word(char str, char *charset)
{
	while (*charset)
	{
		if (str == *charset)
			return (0);
		charset++;
	}
	return (1);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	is_prev;

	count = 0;
	is_prev = 0;
	while (*str)
	{
		if (is_word(*str, charset) && !is_prev)
			count++;
		is_prev = is_word(*str, charset);
		str++;
	}
	return (count);
}

char	*alloc_s(char *str, char *charset)
{
	int		i;
	char	*result;

	i = 0;
	while (str[i] && is_word(str[i], charset))
		i++;
	result = malloc(i + 1);
	if (!result)
		return (NULL);
	result[i] = '\0';
	while (i--)
		result[i] = str[i];
	return (result);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	int		words;

	words = count_words(str, charset);
	result = malloc((words + 1) * sizeof(char *));
	i = 0;
	if (!result)
		return (NULL);
	while (*str)
	{
		if (is_word(*str, charset))
		{
			result[i] = alloc_s(str, charset);
			i++;
			while (*str && is_word(*str, charset))
				str++;
		}
		else
			str++;
	}
	result[i] = NULL;
	return (result);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	str[] = "Hello,,World:42 School--is     cool! so what";
// 	char	charset[] = ",:- ";
// 	char	**result;
// 	ft_split(str, charset);
// 	result = ft_split(str, charset);
// 	if (!result)
// 		return (1);
// 	for (int i = 0; result[i]; i++)
// 		printf("[%s]\n", result[i]);
// 	return (0);
// 	printf("%d\n", count_words(str, charset));
// }