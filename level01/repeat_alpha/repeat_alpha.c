/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 08:44:03 by mel-moud          #+#    #+#             */
/*   Updated: 2024/06/28 10:52:25 by mel-moud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int     i;
	char	j;
	i = 0;
	
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				j = argv[1][i];
				while (j >= 97)
				{
					write(1, &argv[1][i], 1);				
					j--;
				}
			}
			else if (argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				j = argv[1][i];
				while (j >= 65)
				{
					write(1, &argv[1][i], 1);				
					j--;
				}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
						

