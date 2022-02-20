/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikoukou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:21:16 by ikoukou           #+#    #+#             */
/*   Updated: 2021/12/01 21:23:11 by ikoukou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	s;

	i = 0;
	s = 1;
	result = 0;
	while (str[i] && (str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f'
			|| str[i] == ' ' || str[i] == '\r'))
		i++;
	if (str[i] == '-')
		s = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * s);
}
