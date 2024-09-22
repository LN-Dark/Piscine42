/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 14:20:59 by pbranco-          #+#    #+#             */
/*   Updated: 2024/09/15 14:21:00 by pbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int	i;
	int j;
	
	i = 0;
	j = 0;
	if (argc == 2)
	{
		while (argv[1][i] != 32)
		{
			i++;
		}
		while (j < i)
		{
			write(1, &argv[1][j], 1);
			j++;
		}
		
	}
	write(1, "\n", 1);
}