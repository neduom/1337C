/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 00:23:00 by mel-moud          #+#    #+#             */
/*   Updated: 2024/07/05 00:41:28 by mel-moud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	int j;
	int l;

	i = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			l = 0;
			j = 0;
			while (j < i)
			{
				if (av[1][i] == av[1][j])
				{
					l = 1;
				}
				j++;
			}
			if (l == 0)
			{
				while (av[2][j])
				{
					if (av[2][j] == av[1][i])
					{
						write (1, &av[1][i], 1);
						break;
					}
					j++;
				}
			}
			i++;
		}
	}
	write (1, "\n", 1);
}
