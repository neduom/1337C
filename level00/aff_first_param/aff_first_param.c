/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 08:56:08 by mel-moud          #+#    #+#             */
/*   Updated: 2024/06/27 10:46:36 by mel-moud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main (int ac, char **av)
{
	if (ac > 1)
	{
		while (*av[1])
		{
			write (1, &*av[1]++, 1);
		}
		write (1, "\n", 1);
	}
}
