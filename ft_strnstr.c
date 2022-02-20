/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikoukou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:17:24 by ikoukou           #+#    #+#             */
/*   Updated: 2021/11/29 17:38:52 by ikoukou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *tosearch, const char *tofind, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (tofind[j] == '\0')
		return ((char *)tosearch);
	while (tosearch[i] != '\0' && i < n)
	{
		while (tofind[j] == tosearch[i + j] && i + j < n)
		{
			if (tofind[j + 1] == '\0')
			{
				return ((char *)(tosearch + i));
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}
