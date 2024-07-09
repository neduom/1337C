/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 11:42:41 by mel-moud          #+#    #+#             */
/*   Updated: 2024/07/03 12:53:28 by mel-moud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	union result 
	{
		int score;
		char mark;
	}

	union result not;
	
	not.score = 13;

	printf ("result: %d \n", note.score);
}
