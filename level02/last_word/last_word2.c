/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 01:07:33 by mel-moud          #+#    #+#             */
/*   Updated: 2024/07/05 11:45:45 by mel-moud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	last_word(char *str)
{
	int	n;


	n = length(str);
	while (str[n] == ' ')
		n--;
	while (str[n] != ' ')
		n--;
	while (str[n] && str[n] != ' ')
	{
		n++;
		write(1, &str[n], 1);
	}
}

int	main(int ac, char *av[])
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	last_word(av[1]);
	write(1, "\n", 1);
	return (0);
}
