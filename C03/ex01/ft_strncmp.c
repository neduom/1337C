/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 17:26:01 by mel-moud          #+#    #+#             */
/*   Updated: 2024/07/02 12:33:43 by mel-moud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (((*s1 == '\0' || *s2 == '\0') && (n < 1 || n == 0)))
		return (0);
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n && !(*s1 == '\0' || *s2 == '\0'))
		return (0);
	return (s1[i] - s2[i]);
}