/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 00:44:51 by mel-moud          #+#    #+#             */
/*   Updated: 2024/07/05 13:45:23 by mel-moud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_alpha_num(char *str)
{
	int i = 0;
	if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9')))
		return (0);
	return (1);
}

int main(int ac, char **av)
{
	int i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			i++;
		}
		while (!(is_alpha_num(av[1][i])))
		{
			i--;
		}
		while (is_alpha_num(av[1]) == 1)
		{
			i++;
		}
	}
	write (1, "\n", 1);
}
