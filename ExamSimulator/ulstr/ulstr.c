/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 09:09:08 by pbranco-          #+#    #+#             */
/*   Updated: 2024/09/20 09:09:09 by pbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void cases(char *str)
{
	int i = 0;
	char c;
	while(str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{	
			c = str[i] + 32;
			write(1, &c, 1);	
		}
		else if(str[i] >= 'a' && str[i] <= 'z')
		{
			c = str[i] - 32;
			write(1, &c, 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
	
}

int main(int argc, char **argv)
{
	if(argc == 2)
		cases(argv[1]);
	write(1, "\n", 1);
	return (0);
}
