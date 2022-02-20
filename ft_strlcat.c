/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikoukou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 19:29:02 by ikoukou           #+#    #+#             */
/*   Updated: 2021/11/27 20:33:26 by ikoukou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_length;
	size_t	dst_length;
	size_t	i;
	size_t	j;

	src_length = ft_strlen(src);
	dst_length = ft_strlen(dst);
	i = 0;
	j = dst_length;
	if (dstsize < dst_length + 1)
		return (dstsize + src_length);
	while (src[i] != '\0' && j + 1 < dstsize)
	{
		dst[j++] = src[i++];
	}
	dst[j] = '\0';
	return (dst_length + src_length);
}
