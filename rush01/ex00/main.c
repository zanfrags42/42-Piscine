/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: mohamed- <mohamed-@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 13:45:07 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/03 22:05:07 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_error(void);
char	**convert_in_array(char *str);
int		is_correct_params(char **argv);
void	rush(char **clues);
=======
/*   By: mohamed- <mohamed-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 13:45:07 by mohamed-          #+#    #+#             */
/*   Updated: 2025/08/03 13:48:46 by mohamed-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
>>>>>>> 706fab569c44a1738acd9c44ce2f83937dddfaf1

int	main(int argc, char **argv)
{
	char	**clues;

	clues = convert_in_array(argv[1]);
	if (!is_correct_params(argv) || argc != 2)
		print_error();
	else
		rush(clues);
	return (0);
}

// If it's valid, it calls the rush function