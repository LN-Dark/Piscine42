/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigitplussign.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcruz <pcruz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 16:00:07 by pcruz             #+#    #+#             */
/*   Updated: 2024/12/13 16:06:51 by pcruz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigitplussign(int i)
{
	if (('0' <= i && i <= '9') || i == '-' || i == '+')
		return (1);
	return (0);
}