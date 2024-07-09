/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 10:16:43 by mel-moud          #+#    #+#             */
/*   Updated: 2024/06/29 10:20:09 by mel-moud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	s;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		s = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = s;
		i++;
	}
}
