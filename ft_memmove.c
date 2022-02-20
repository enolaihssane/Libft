/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikoukou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:58:11 by ikoukou           #+#    #+#             */
/*   Updated: 2021/11/29 14:36:32 by ikoukou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*dst_replace;
	const char	*src_replace;

	dst_replace = dst;
	src_replace = src;
	if (dst_replace > src_replace)
	{
		while (n--)
		{
			dst_replace[n] = src_replace[n];
		}
	}
	else
	{
		ft_memcpy(dst, src, n);
	}
	return (dst_replace);
}
