/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikoukou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:35:13 by ikoukou           #+#    #+#             */
/*   Updated: 2021/11/25 11:00:51 by ikoukou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_rep;
	unsigned char	*s2_rep;

	i = 0;
	s1_rep = (unsigned char *)s1;
	s2_rep = (unsigned char *)s2;
	while (i < n)
	{
		if (s1_rep[i] != s2_rep[i])
			return (s1_rep[i] - s2_rep[i]);
		i++;
	}
	return (0);
}
