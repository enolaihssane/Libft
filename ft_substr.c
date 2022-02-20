/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikoukou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:15:04 by ikoukou           #+#    #+#             */
/*   Updated: 2021/12/26 15:11:24 by ikoukou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*d;
	size_t		i;

	i = 0;
	if (!s)
		return (0);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	d = (char *)malloc(sizeof(char) * (len + 1));
	if (!d)
		return (0);
	if (start < ft_strlen(s))
	{
		while (s[start] != '\0' && i < len)
			d[i++] = s[start++];
	}
	d[i] = '\0';
	return (d);
}
