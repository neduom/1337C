/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:47:36 by mel-moud          #+#    #+#             */
/*   Updated: 2024/06/27 11:07:46 by mel-moud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		while (*av[ac - 1])
		{
			write (1, &*av[ac -1]++, 1);
		}
	}
}
