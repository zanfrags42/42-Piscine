/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed- <mohamed-@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 22:26:43 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/12 22:26:43 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char str, char *charset)
{
	while (*charset)
		if (str == *charset++)
			return (1);
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	is_true;
	int	is_prev;

	count = 0;
	is_prev = 1;
	while (*str)
	{
		is_true = is_sep(*str, charset);
		if (!is_true && is_prev)
			count++;
		is_prev = is_true;
		str++;
	}
	return (count);
}

char	*alloc_s(char *str, char *charset)
{
	int		i;
	char	*result;

	i = 0;
	while (str[i] && !is_sep(str[i], charset))
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
	int		word_c;
	int		i;

	word_c = count_words(str, charset);
	result = malloc((word_c + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (*str)
	{
		if (!is_sep(*str, charset))
		{
			result[i] = alloc_s(str, charset);
			i++;
			while (*str && !is_sep(*str, charset))
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
// }
