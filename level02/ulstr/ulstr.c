/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 23:09:11 by mel-moud          #+#    #+#             */
/*   Updated: 2024/07/04 23:27:09 by mel-moud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1])
		{
			if (*av[1] >= 'A' && *av[1] <= 'Z')
			{
				*av[1] += 32;
				write(1, av[1], 1);
			}
			else if (*av[1] >= 'a' && *av[1] <= 'z')
			{
				*av[1] -= 32;
				write(1, av[1], 1);
			}
			else
				write(1, av[1], 1);
			av[1]++;
		}
	}
	write(1, "\n", 1);
	return (1);
}