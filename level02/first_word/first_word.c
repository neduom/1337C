/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 23:29:41 by mel-moud          #+#    #+#             */
/*   Updated: 2024/07/04 23:49:05 by mel-moud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
		{
			i++;
		}
		while (av[1][i] != '\0' && (av[1][i] != ' ' && av[1][i] != '\t'))
		{		
			write (1, &av[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}