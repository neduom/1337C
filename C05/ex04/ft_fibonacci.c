/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 10:05:06 by mel-moud          #+#    #+#             */
/*   Updated: 2024/07/08 10:20:43 by mel-moud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	result;

	result = 1;
	if (index < 0)
		return (-1);
	else if (index < 2)
		return (index);
	else
		result *= ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (result);
}
