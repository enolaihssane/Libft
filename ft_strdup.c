/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikoukou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:26:14 by ikoukou           #+#    #+#             */
/*   Updated: 2021/12/01 15:00:08 by ikoukou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*s2;

	i = 0;
	s2 = (char *)malloc(ft_strlen(s1) * sizeof(char) + 1);
	if (!s2)
		return (0);
	else
		ft_memcpy(s2, s1, ft_strlen(s1) + 1);
	return (s2);
}
