/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 08:31:03 by mel-moud          #+#    #+#             */
/*   Updated: 2024/07/04 09:55:45 by mel-moud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *str)
{
	int l;
	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	return (l);
}

char    *ft_strdup(char *src)
{
	char *new;
	int i;

	i = 0;
	if (!(new = (char*)malloc(sizeof(char) * ft_strlen(src) + 1)))
	{
		return NULL;
	}
	while (*src)
		new[i++] = *src++;
	new[i] = '\0';
	return(new);
}
