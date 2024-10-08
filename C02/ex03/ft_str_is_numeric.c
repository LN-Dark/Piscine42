/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:12:54 by pbranco-          #+#    #+#             */
/*   Updated: 2024/09/08 14:12:58 by pbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	p;

	p = 0;
	while (str[p] != '\0')
	{
		if (!(str[p] >= 48 && str[p] <= 57))
		{
			return (0);
		}
		p++;
	}
	return (1);
}
