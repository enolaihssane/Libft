/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikoukou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:53:08 by ikoukou           #+#    #+#             */
/*   Updated: 2021/11/27 20:32:12 by ikoukou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		else
			i--;
	}
	return (0);
}
