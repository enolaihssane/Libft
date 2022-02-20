/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikoukou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:23:11 by ikoukou           #+#    #+#             */
/*   Updated: 2021/11/27 21:22:13 by ikoukou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*s;

	s = (unsigned char *)b;
	while (n != 0)
	{
		*s = (unsigned char) c;
		s++;
		n--;
	}
	return (b);
}
